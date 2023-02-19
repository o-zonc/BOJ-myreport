#include <iostream>

using namespace std;

int dp[11];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i < 11; i++) {
        dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
    }

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        cout << dp[n] << '\n';
    }
}