#include <iostream>
#include <string>

using namespace std;

bool v[11][11], h[11][11];
int x, y;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'U') {
            if (x - 1 < 0 || x - 1 >= n || y < 0 || y >= n) continue;

            v[x][y] = 1;
            v[--x][y] = 1;
        } else if (s[i] == 'D') {
            if (x + 1 < 0 || x + 1 >= n || y < 0 || y >= n) continue;

            v[x][y] = 1;
            v[++x][y] = 1;
        } else if (s[i] == 'L') {
            if (y - 1 < 0 || y - 1 >= n || x < 0 || x >= n) continue;

            h[x][y] = 1;
            h[x][--y] = 1;
        } else {
            if (y + 1 < 0 || y + 1 >= n || x < 0 || x >= n) continue;

            h[x][y] = 1;
            h[x][++y] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] && h[i][j])
                cout << '+';
            else if (v[i][j])
                cout << '|';
            else if (h[i][j])
                cout << '-';
            else
                cout << '.';
        }
        cout << '\n';
    }
}