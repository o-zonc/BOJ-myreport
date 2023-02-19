#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int x, int y) {
    if (y == 0) return x;
    else return gcd(y, x % y);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;

        cout << a * b / gcd(a, b) << ' ' << gcd(a, b) << '\n';
    }
}