#include <iostream>

using namespace std;

char sq[2][101];

void leopard() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 101; j++) {
            if ((i + j) % 2) {
                sq[i][j] = ' ';
            } else {
                sq[i][j] = '*';
            }
        }
    }
}

void vecx(int n) {
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < n; i++) {
            cout << sq[j][i];
        }
        cout << '\n';
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    leopard();

    int n;
    cin >> n;

    if (n == 1) {
        cout << '*';
    } else {
        for (int i = 1; i <= n; i++) {
            vecx(n);
        }
    }
}