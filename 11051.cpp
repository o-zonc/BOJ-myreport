#include <iostream>

using namespace std;

long long dp[1001][1001];

int pascal(int n, int m) {
    if (dp[n][m] != 0)
        return dp[n][m];
    else {
        dp[n][m] = (pascal(n - 1, m - 1) % 10007 + pascal(n - 1, m) % 10007) % 10007;
        return dp[n][m];
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    dp[0][0] = 0;
    for (int i = 1; i <= n; i++) {
        dp[i][0] = dp[i][i] = 1;
    }

    long long ans = pascal(n, k);

    cout << ans << '\n';
}