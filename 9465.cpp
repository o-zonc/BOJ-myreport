#include <algorithm>
#include <iostream>

using namespace std;

int t, n, x, ans;
int arr[2][100001], dp[2][100001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        for (int j = 1; j <= n; j++) {
            cin >> arr[0][j];
        }
        for (int k = 1; k <= n; k++) {
            cin >> arr[1][k];
        }
        for (int j = 1; j <= n; j++) {
            dp[0][j] = max(dp[1][j - 1], dp[1][j - 2]) + arr[0][j];
            dp[1][j] = max(dp[0][j - 1], dp[0][j - 2]) + arr[1][j];
        }

        cout << max(dp[0][n], dp[1][n]) << '\n';
    }
}