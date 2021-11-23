#include <iostream>
#include <queue>

using namespace std;
#define ll long long

char s[1005][1005];
int l[1005][1005], r[1005][1005], u[1005][1005], d[1005][1005];
int main(){
  int T, m, n;
  cin >> T;
  while(T--){
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> s[i];
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++)
          if(s[i][j] != '#') {
        l[i][j] = j ? l[i][j-1] : -1;
        u[i][j] = i ? u[i-1][j] : -1;
      }
      else {
        l[i][j] = j, u[i][j] = i;
      }
    }
    for(int i = n-1; i >= 0; i--){
      for(int j = m-1; j >= 0; j--)
          if(s[i][j] != '#') {
        r[i][j] = j < m-1 ? r[i][j+1] : m;
        d[i][j] = i < n-1 ? d[i+1][j] : n;
      }
      else {
        r[i][j] = j, d[i][j] = i;
      }
    }
    queue<pair<int, int> > q;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
    
    if(s[i][j] != '#' && s[i][j] != '.') {
      q.push({i, j});
    }
    int ans = 0;
    while(!q.empty()) {
      pair<int, int> e = q.front(); q.pop();
      int first = e.first, second = e.second;
      int ly = l[first][second] + 1, ry = r[first][second] - 1;
      int lx = u[first][second] + 1, rx = d[first][second] - 1;
      int tx = lx + rx - first, ty = ly + ry - second;
      if(s[tx][second] == '.') {
        s[tx][second] = s[first][second];
        q.push({tx, second});
        ans++;
      }
      if(s[first][ty] == '.') {
        s[first][ty] = s[first][second];
        q.push({first, ty});
        ans++;
      }
    }
    cout << ans << "\n";
    for(int i = 0; i < n; i++)
        puts(s[i]);
  }
}
