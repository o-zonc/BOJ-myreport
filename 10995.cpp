#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2) {
            for (int j = 1; j <= n; j++) {
                cout << '*' << ' ';
            }
            cout << '\n';
        } else {
            for (int j = 1; j <= n; j++) {
                cout << ' ' << '*';
            }
            cout << '\n';
        }
    }
}