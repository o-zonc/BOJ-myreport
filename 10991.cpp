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
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k % 2) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}