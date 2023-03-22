#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define ll long long

const int mx = 1000000;
int p[mx + 1], a[2][2][mx + 1], s[2][2][mx + 1], moebius[mx + 1];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll n, m;
    cin >> n >> m;

    ll sumans = n * m;

    moebius[1] = 1;
    for (int i = 1; i <= mx; i++) {
        for (int j = 2 * i; j <= mx; j += i) {
            moebius[j] -= moebius[i];
        }
    }

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (moebius[x])
            ++a[0][(moebius[x] + 1) / 2][x];
    }
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        if (moebius[x])
            ++a[1][(moebius[x] + 1) / 2][x];
    }

    for (int k = 0; k < 2; k++) {
        for (int l = 0; l < 2; l++) {
            for (int i = 1; i <= mx; i++) {
                s[k][l][i] = a[k][l][i];
            }
        }
    }

    for (int k = 0; k < 2; k++) {
        for (int l = 0; l < 2; l++) {
            for (int i = 1; i <= mx; i++) {
                for (int j = i * 2; j <= mx; j += i) {
                    s[k][l][i] += a[k][l][j];
                }
            }
        }
    }

    ll ans[2] = {0, 0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 1; k <= mx; k++) {
                ans[i ^ j ^ 1] += 1LL * s[0][i][k] * s[1][j][k] * moebius[k];
            }
        }
    }

    cout << ans[0] << ' ' << sumans - ans[0] - ans[1] << ' ' << ans[1] << "\n";
}