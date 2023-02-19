#include <iostream>

using namespace std;

int gcd(int x, int y) {
    if (y == 0) return x;
    else return gcd(y, x % y);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    int c = b - a;
    while (gcd(c, b) > 1) {
        int bc = gcd(b, c);
        c /= bc;
        b /= bc;
    }
    cout << c << " " << b;
}