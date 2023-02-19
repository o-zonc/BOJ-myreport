#include <iostream>

using namespace std;

int t, n, m, x, y;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m >> x >> y;

        int l = lcm(n, m);
        int a;
        for (a = x; a <= l; a += n) {
            int temp = (a % m == 0) ? m : a % m;
            if (temp == y) {
                cout << a << '\n';
                break;
            }
        }
        if (a > l) {
            cout << "-1" << '\n';
        }
    }
}