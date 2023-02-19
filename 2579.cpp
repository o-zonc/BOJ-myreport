#include <iostream>

using namespace std;

int dp[301], st[301];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> st[i];
    }

    dp[0] = st[0];
    dp[1] = max(st[1], st[0] + st[1]);
    dp[2] = max(st[2] + st[1], st[2] + st[0]);

    for (int i = 3; i < n; i++) {
        dp[i] = max(st[i] + dp[i - 2], st[i] + st[i - 1] + dp[i - 3]);
    }

    cout << dp[n - 1] << '\n';
}