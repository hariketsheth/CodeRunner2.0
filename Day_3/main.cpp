#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
using hariket = priority_queue< pair<int, pair<int, int> > >;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int temp = 1; temp <= test_cases; temp++) {
        int R, C;
        cin >> R >> C;
        int a[R][C], b[R][C];
        hariket hari;
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                cin >> a[i][j];
                hari.push({a[i][j], {i, j}});
            }
        }
        copy(a[0], a[R], b[0]);

        constexpr int diff_1[4] = {1, 0, -1, 0};
        constexpr int diff_2[4] = {0, -1, 0, 1};
        long long result = 0;
        while (!hari.empty()) {
            int cx = hari.top().second.first;
            int cy = hari.top().second.second;
            int cb = hari.top().first;
            hari.pop();

            if (cb < b[cx][cy]) {
                continue;
            }
            
            result += b[cx][cy] - a[cx][cy];
            for (int j = 0; j < 4; j++) {
                int val_1 = cx + diff_1[j];
                int val_2 = cy + diff_2[j];
                if (val_1 >= 0 && val_1 < R && val_2 >= 0 && val_2 < C) {
                    if (b[cx][cy] - 1 > b[val_1][val_2]) {
                        b[val_1][val_2] = b[cx][cy] - 1;
                        hari.push({b[val_1][val_2], {val_1, val_2}});
                    }
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}
