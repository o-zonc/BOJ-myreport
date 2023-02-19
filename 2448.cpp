#include <iostream>
#include <string>

using namespace std;

char t[3100][6200];

void sierpinski(int x, int y, int n) {
    if (n == 3) {
        t[x][y] = '*';
        t[x + 1][y + 1] = '*';
        t[x + 1][y - 1] = '*';
        for (int i = -2; i <= 2; i++) {
            t[x + 2][y + i] = '*';
        }
        return;
    }

    sierpinski(x, y, n / 2);
    sierpinski(x + n / 2, y + n / 2, n / 2);
    sierpinski(x + n / 2, y - n / 2, n / 2);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            t[i][j] = ' ';
        }
    }

    sierpinski(0, n - 1, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            cout << t[i][j];
        }
        cout << '\n';
    }
}