#include <iostream>

using namespace std;

char sponge[6561][6561];

void frac_blank(int x, int y, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sponge[x + i][y + j] = ' ';
        }
    }
}

void frac(int x, int y, int n) {
    if (n == 3) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i == 1 && j == 1) {
                    sponge[x + i][y + j] = ' ';
                } else {
                    sponge[x + i][y + j] = '*';
                }
            }
        }
        return;
    }

    n /= 3;
    for (int i = 0; i < 3 * n; i += n) {
        for (int j = 0; j < 3 * n; j += n) {
            if (i == n && j == n) {
                frac_blank(x + i, y + j, n);
            } else {
                frac(x + i, y + j, n);
            }
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    frac(0, 0, n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << sponge[i][j];
        }
        cout << '\n';
    }
}