#include <iostream>

using namespace std;

int n, arr[1001], dp[1001], rdp[1001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j <= i; j++) {
            if (arr[j] < arr[i] && dp[i] < dp[j] + 1) dp[i] = dp[j] + 1;
        }
    }

    for (int i = n; i >= 1; i--) {
        rdp[i] = 1;
        for (int j = n; j >= i; j--) {
            if (arr[j] < arr[i] && rdp[i] < rdp[j] + 1) rdp[i] = rdp[j] + 1;
        }
    }

    int ans = 0;
    for (int i = 0; i <= n; i++) {
        if (ans < dp[i] + rdp[i] - 1) ans = dp[i] + rdp[i] - 1;
    }

    cout << ans << '\n';
}