#include <iostream>

using namespace std;

int dp[46] = {0, 1};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    cout << dp[n - 1] << ' ' << dp[n];
}
