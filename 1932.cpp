#include <algorithm>
#include <iostream>

using namespace std;

int dp[501][501];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> arr[i][j];
        }
    }

    int maxcnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            dp[i][0] = dp[i - 1][0] + arr[i][0];
            if (i) dp[i][i] = dp[i - 1][i - 1] + arr[i][i];
            maxcnt = max(maxcnt, max(dp[i][0], dp[i][i]));
        }
    }
    for (int i = 2; i < n; i++) {
        for (int j = 1; j < i; j++) {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
            maxcnt = max(maxcnt, dp[i][j]);
        }
    }

    cout << maxcnt;
}