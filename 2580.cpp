#include <iostream>

using namespace std;

int sdk[9][9];
bool row[9][9], col[9][9], sq[9][9];

void dfs(int cnt) {
    int x = cnt / 9;
    int y = cnt % 9;

    if (cnt == 81) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << sdk[i][j] << ' ';
            }
            cout << '\n';
        }
        exit(0);
    }

    if (sdk[x][y] == 0) {
        for (int i = 1; i <= 9; i++) {
            if (row[x][i] == false && col[y][i] == false && sq[(x / 3) * 3 + (y / 3)][i] == false) {
                row[x][i] = true;
                col[y][i] = true;
                sq[(x / 3) * 3 + (y / 3)][i] = true;
                sdk[x][y] = i;
                dfs(cnt + 1);
                sdk[x][y] = 0;
                row[x][i] = false;
                col[y][i] = false;
                sq[(x / 3) * 3 + (y / 3)][i] = false;
            }
        }
    } else
        dfs(cnt + 1);
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> sdk[i][j];
            if (sdk[i][j] != 0) {
                row[i][sdk[i][j]] = true;
                col[j][sdk[i][j]] = true;
                sq[(i / 3) * 3 + (j / 3)][sdk[i][j]] = true;
            }
        }
    }

    dfs(0);

    return 0;
}