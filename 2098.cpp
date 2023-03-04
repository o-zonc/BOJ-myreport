#include <iostream>

using namespace std;

const int inf = 0x3f3f3f3f, mxn = 1000000000;
int dp[16][1 << 16], a[16][16], n;

int dfs(int v, int mask) {
    if (dp[v][mask])
        return dp[v][mask];

    if (mask == (1 << n) - 1)
        return dp[v][mask] = a[v][0] ? a[v][0] : inf;

    dp[v][mask] = inf;

    for (int i = 0; i < n; ++i) {
        if ((mask & (1 << i)) || !a[v][i])
            continue;

        dp[v][mask] = min(dp[v][mask], dfs(i, mask | (1 << i)) + a[v][i]);
    }

    return dp[v][mask];
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    dp[0][1] = dfs(0, 1);

    cout << (dp[0][1] == inf ? -1 : dp[0][1]);
}