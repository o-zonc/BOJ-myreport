#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int m, s, g, l, r;
    double a, b;
    cin >> m >> s >> g >> a >> b >> l >> r;

    double left = (l / a) + ((double)m / g), right = (r / b) + ((double)m / s);
    if (left < right)
        cout << "friskus";
    else
        cout << "latmask";
}