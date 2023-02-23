#include <climits>
#include <iostream>

using namespace std;

#define ll long long

ll mx[501][2], dp[501][501];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> mx[i][0] >> mx[i][1];
    }

    for (int i = n - 1; i > 0; i--) {
        for (int j = i + 1; j <= n; j++) {
            dp[i][j] = LLONG_MAX;
            for (int k = i; k <= j; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + (mx[i][0] * mx[k][1] * mx[j][1]));
            }
        }
    }

    cout << dp[1][n];
}