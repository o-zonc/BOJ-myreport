#include <iostream>

using namespace std;

int t, m, n, k;
int map[51][51], visited[51][51];
int dy[] = {0, 0, -1, 1};
int dx[] = {-1, 1, 0, 0};

void reset() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            map[i][j] = 0;
            visited[i][j] = 0;
        }
    }
}

void dfs(int y, int x) {
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= m || ny < 0 || ny >= n)
            continue;

        if (map[ny][nx] == 1 && visited[ny][nx] == 0) {
            dfs(ny, nx);
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> t;

    while (t--) {
        cin >> m >> n >> k;

        reset();

        while (k--) {
            int x, y;
            cin >> x >> y;
            map[y][x] = 1;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (map[i][j] == 1 && visited[i][j] == 0) {
                    dfs(i, j);
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';
    }
}