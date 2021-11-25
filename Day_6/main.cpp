#include <bits/stdc++.h>
using namespace std;
string s1, s2;

int first[256];

char pre(char c) {
    if (c == 'a') return 'z';
    return c - 1;
}
char nxt(char c) {
    if (c == 'z') return 'a';
    return c + 1;
}
int solve() {
    cin >> s1 >> s2;
    memset(first, 0x3f, sizeof first);
    for (auto c : s2) {
        first[c] = 0;
    }
    for (int i = 1; i <= 26; i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            first[c] = min(first[c], first[pre(c)] + 1);
            first[c] = min(first[c], first[nxt(c)] + 1);
        }
    }
    int ans = 0;
    for (auto c : s1) {
        ans += first[c];
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout<< solve() <<endl;
    }
    return 0;
}
