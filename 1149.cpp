#include <algorithm>
#include <iostream>

using namespace std;

int arr[1001][3], dp[3];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    for (int i = 1; i <= n; i++) {
        int r = dp[0];
        int g = dp[1];
        int b = dp[2];

        dp[0] = min(g, b) + arr[i][0];
        dp[1] = min(r, b) + arr[i][1];
        dp[2] = min(g, r) + arr[i][2];
    }

    cout << min(dp[0], min(dp[1], dp[2]));
}