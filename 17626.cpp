#include <iostream>

using namespace std;

int dp[50001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    dp[0] = 0, dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        int mini = 4;
        for (int j = 1; j * j <= i; j++) {
            int temp = i - j * j;
            mini = min(mini, dp[temp]);
        }
        dp[i] = mini + 1;
    }

    cout << dp[n];
}