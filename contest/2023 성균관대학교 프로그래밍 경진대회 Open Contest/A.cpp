#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m, k;
    cin >> n >> m >> k;

    if (k < n + m - 1) {
        cout << "NO";
    } else {
        cout << "YES\n";
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < m; j++) {
                cout << i + j << ' ';
            }
            cout << '\n';
        }
    }
}