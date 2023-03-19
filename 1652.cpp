#include <iostream>

using namespace std;

char room[101][101];
int col[101], row[101];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> room[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (room[i][j] == room[i][j + 1] && room[i][j] == '.') {
                if (room[i][j + 2] == '.')
                    continue;
                else
                    col[i]++;
            }

    for (int j = 0; j < n; j++)
        for (int i = 0; i < n - 1; i++)
            if (room[i][j] == room[i + 1][j] && room[i][j] == '.') {
                if (room[i + 2][j] == '.')
                    continue;
                else
                    row[i]++;
            }

    int r = 0, c = 0;
    for (int i = 0; i < n; i++) {
        r += row[i];
        c += col[i];
    }

    cout << c << ' ' << r;
}