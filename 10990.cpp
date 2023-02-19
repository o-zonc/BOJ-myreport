#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            cout << ' ';
        }
        cout << '*';
        if (i == 1) {
            cout << '\n';
            continue;
        } else {
            for (int k = 1; k <= 2 * (i - 1) - 1; k++) {
                cout << ' ';
            }
            cout << '*';
        }
        cout << '\n';
    }
}