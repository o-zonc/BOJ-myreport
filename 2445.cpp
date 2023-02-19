#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        for (int k = i + 1; k <= 2 * n - i; k++) {
            cout << ' ';
        }
        for (int l = 2 * n - i + 1; l <= 2 * n; l++) {
            cout << '*';
        }
        cout << '\n';
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        for (int k = i + 1; k <= 2 * n - i; k++) {
            cout << ' ';
        }
        for (int l = 2 * n - i + 1; l <= 2 * n; l++) {
            cout << '*';
        }
        cout << '\n';
    }
}