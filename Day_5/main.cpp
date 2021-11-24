#include<bits/stdc++.h>
using namespace std;

int T;
int N;
string s;
int pos_1[500501], pos_2[500501];

int main(){
    cin >> T;
    for(int temp=1; temp<=T; temp++){
        cin >> N >> s;
        s = '#' + s;
        long long ans = 0;
        pos_1[0] = 1234567890;
        for(int i=1; i<=N; i++){
            pos_1[i] = pos_1[i-1] + 1;
            if (s[i] == '1') 
                pos_1[i] = 0;
        }

        pos_2[N+1] = 1234567890;
        for(int i=N; i>=1; i--){
            pos_2[i] = pos_2[i+1] + 1;
            if (s[i] == '1') 
                pos_2[i] = 0;
        }

        for(int i=1; i<=N; i++)
            ans += min(pos_1[i], pos_2[i]);
        cout << ans;
        cout << "\n";
    }
    return 0;
}
