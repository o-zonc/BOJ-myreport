#include <iostream>

using namespace std;

int n, m;
bool chk[205][205];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int p, q;
        cin >> p >> q;
        chk[p][q] = chk[q][p] = true;
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = i + 1; j <= n; ++j) {
            if (chk[i][j]) continue;
            for (int k = j + 1; k <= n; ++k) {
                if (chk[i][k] || chk[j][k]) continue;
                ++ans;
            }
        }

    cout << ans;
}