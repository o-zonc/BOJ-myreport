#include <iostream>
#include <algorithm>

using namespace std;

int arr[1002][1002];
int dp[1002][1002];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int h, w, n;
    cin >> h >> w >> n;

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> arr[i][j];
        }
    }
    dp[1][1] = n - 1;

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (i > 1) dp[i][j] += (arr[i - 1][j] == 0 ? (dp[i - 1][j] + 1) / 2 : dp[i - 1][j] / 2);
            if (j > 1) dp[i][j] += (arr[i][j - 1] == 1 ? (dp[i][j - 1] + 1) / 2 : dp[i][j - 1] / 2);
        }
    }

    int x = 1, y = 1;
    while (x <= h && y <= w) {
        if ((arr[x][y] + dp[x][y]) % 2) y++;
        else x++;
    }

    cout << x << ' ' << y;
}