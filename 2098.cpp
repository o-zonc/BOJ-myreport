#include <iostream>

using namespace std;

const int inf = 0x3f3f3f3f;
int dp[16][1 << 16], arr[16][16], n;

int dfs(int x, int mask) {
    if (dp[x][mask]) return dp[x][mask];

    if (mask == (1 << n) - 1) return dp[x][mask] = arr[x][0] ? arr[x][0] : inf;

    dp[x][mask] = inf;

    for (int i = 0; i < n; i++) {
        if ((mask & (1 << i)) || !arr[x][i]) continue;

        dp[x][mask] = min(dp[x][mask], dfs(i, mask | (1 << i)) + arr[x][i]);
    }

    return dp[x][mask];
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    dp[0][1] = dfs(0, 1);

    cout << (dp[0][1] == inf ? -1 : dp[0][1]);
}