#include <iostream>

using namespace std;

#define mod 1000000007;

int dp[1000001] = {0, 1, 1,};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
    }

    cout << dp[n];
}