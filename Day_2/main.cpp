#include <iostream>
#include <map>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

char string1[1001], string2[1001];
bool result;
void troublesome(int current, vector < int > & part_2, map < int, vector < int >> & part_1) {
  if (!result) {
    return;
  }
  for (int i = 0; i < part_1[current].size(); i++) {
    int next = part_1[current][i];
    if (part_2[next] == part_2[current]) {
      result = false;
      return;
    }
  }
  int next_part_2;
  if (part_2[current] == 1) next_part_2 = 2;
  else next_part_2 = 1;
  for (int i = 0; i < part_1[current].size(); i++) {
    int next = part_1[current][i];
    if (part_2[next] == 0) {
      part_2[next] = next_part_2;
      troublesome(next, part_2, part_1);
    }
  }
}


int main() {
  int test_cases, m;
  cin >> test_cases;
  
  for (int cnt = 1; cnt <= test_cases; cnt++) {
    cin >> m;
    map < string, int > trans;
    map < int, vector < int >> part_1;
    int num = 1;
    
    for (int i = 0; i < m; i++) {
      cin >> string1 >> string2;
      if (trans[string1] == 0) 
        trans[string1] = num++;
      if (trans[string2] == 0) 
        trans[string2] = num++;
      part_1[trans[string1]].push_back(trans[string2]);
      part_1[trans[string2]].push_back(trans[string1]);
    }
    
    vector < int > part_2(num + 1, 0);
    result = true;
    
    
    for (int i = 1; i < num; i++) {
      if (part_2[i] == 0) {
        part_2[i] = 1;
        troublesome(i, part_2, part_1);
        if (!result) 
          break;
      }
    }
    if (result) 
      cout << "Yes\n";
    else 
      cout << "No\n";
  }
  return 0;
}
