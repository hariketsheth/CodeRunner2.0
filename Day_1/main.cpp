#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i = 1; i <= test_cases; ++i){
        int N, K;
        cin >> N >> K;
        string S;
        cin >> S;
        int final = 0;
        for(int j = 0; j < int(S.size()/2); ++j){
            if(S[j] != S[S.size() - j - 1]) 
              final++;
        }
        cout << abs(k-final) << endl;
    }
    return 0;
}
