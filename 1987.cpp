#include <iostream>

using namespace std;

bool visited[26];
int n, m, ans, dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
char arr[21][21];

void dfs(int i, int j, int k) {
    ans = max(k, ans);

    for (int l = 0; l < 4; l++) {
        int x = i + dx[l];
        int y = j + dy[l];

        if (x <= 0 || y <= 0 || x > n || y > m)
            continue;
        if (visited[arr[x][y] - 'A'])
            continue;

        visited[arr[x][y] - 'A'] = 1;
        dfs(x, y, k + 1);
        visited[arr[x][y] - 'A'] = 0;
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }

    visited[arr[1][1] - 'A'] = 1;
    dfs(1, 1, 1);

    cout << ans;
}