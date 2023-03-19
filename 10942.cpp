#include <iostream>

using namespace std;

int arr[2001];
bool dp[2001][2001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        dp[i][i] = 1;

        if (i != 1 && arr[i] == arr[i - 1]) dp[i - 1][i] = 1;
    }

    for (int i = 2; i <= n - 1; i++) {
        for (int j = 1; i + j <= n; j++) {
            if (arr[j] == arr[i + j] && dp[j + 1][i + j - 1]) dp[j][i + j] = 1;
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;

        cout << dp[a][b] << '\n';
    }
}