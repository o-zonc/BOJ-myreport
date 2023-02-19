#include <algorithm>
#include <iostream>

using namespace std;

int dp[5005];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    dp[3] = 1;
    dp[5] = 1;
    for (int i = 6; i <= n; i++) {
        if (dp[i - 3] != 0 && dp[i - 5] != 0) {
            dp[i] = min(dp[i - 3], dp[i - 5]) + 1;
        } else if (dp[i - 3] != 0) {
            dp[i] = dp[i - 3] + 1;
        } else if (dp[i - 5] != 0) {
            dp[i] = dp[i - 5] + 1;
        }
    }

    if (dp[n] == 0) {
        cout << -1;
    } else {
        cout << dp[n];
    }
}