#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    cout << fixed;
    cout.precision(2);
    double tri = 250.0 * 250.0 / 2;
    if (n == 0 && m == 0) {
        cout << 125.00 << ' ' << 125.00;
    } else if (n > 0 && m > 0 && n >= m) {
        cout << 0.00 << ' ' << 250.0 - tri / max(n, m);
    } else if (n > 0 && m > 0 && n < m) {
        cout << 250.0 - tri / max(n, m) << ' ' << 0.00;
    } else if (n < 125 && m == 0) {
        double d = 250.0 - tri / (250 - n);
        cout << d << ' ' << 250.0 - d;
    } else if (n == 0 && m < 125) {
        double d = 250.0 - tri / (250 - m);
        cout << 250.0 - d << ' ' << d;
    } else if (m == 0) {
        cout << 0.00 << ' ' << tri / n;
    } else {
        cout << tri / m << ' ' << 0.00;
    }
}