#include <iostream>

using namespace std;

int dp[1001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    dp[0] = 0, dp[1] = 1, dp[2] = 3;
    for (int i = 3; i < 1001; i++) {
        dp[i] = (((dp[i - 2] % 10007) * 2) % 10007 + dp[i - 1] % 10007) % 10007;
    }

    cout << dp[n] << '\n';
}