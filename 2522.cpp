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
        for (int k = n - i + 1; k <= n; k++) {
            cout << '*';
        }
        cout << '\n';
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << ' ';
        }
        for (int k = n - i + 1; k <= n; k++) {
            cout << '*';
        }
        cout << '\n';
    }
}