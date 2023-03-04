#include <iostream>
#include <string>

using namespace std;

int sdk[9][9];
bool row[9][9], col[9][9], sq[9][9];

void dfs(int idx) {
    int x = idx / 9;
    int y = idx % 9;

    if (idx == 81) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << sdk[i][j];
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
                dfs(idx + 1);
                sdk[x][y] = 0;
                row[x][i] = false;
                col[y][i] = false;
                sq[(x / 3) * 3 + (y / 3)][i] = false;
            }
        }
    } else
        dfs(idx + 1);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 0; i < 9; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < 9; j++) {
            sdk[i][j] = s[j] - '0';

            if (sdk[i][j] != 0) {
                row[i][sdk[i][j]] = true;
                col[j][sdk[i][j]] = true;
                sq[(i / 3) * 3 + (j / 3)][sdk[i][j]] = true;
            }
        }
    }

    dfs(0);
}