#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        int n, p;
        cin >> n >> p;

        cout << n << ' ' << p << '\n';
        if (n == 1)
            cout << p << '\n';
        else
            cout << (n - 1) * (p - 2) + p << '\n';
    }
}