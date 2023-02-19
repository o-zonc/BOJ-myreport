#include <iostream>

using namespace std;

int dp[41] = {0,1,1};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 3; i <= 40; i++) dp[i] = dp[i - 1] + dp[i - 2];

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        if (n == 0) cout << "1 0" << '\n';
        else if (n == 1) cout << "0 1" << '\n';
        else cout << dp[n - 1] << ' ' << dp[n] << '\n';
    }
}