#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int x, y;
    cin >> x >> y;

    int a = 100 - x, b = 100 - y, c = x + y - 100, d = a * b, q = d / 100, r = d % 100;
    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n'
         << c + q << ' ' << r;
}