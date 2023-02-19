#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << ' ';
        }
        if (i == 1) {
            cout << '*' << '\n';
        } else if (i == n) {
            for (int k = 1; k <= 2 * n - 1; k++) {
                cout << '*';
            }
        } else {
            cout << '*';
            for (int k = 1; k < 2 * i - 2; k++) {
                cout << ' ';
            }
            cout << '*' << '\n';
        }
    }
}