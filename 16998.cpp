#include <iostream>

using namespace std;

#define ll long long

ll gcd(ll x, ll y) {
    return y ? gcd(y, x % y) : x;
}

ll div(ll p, ll q, ll n) {
    if (n == 0 || p == 0) {
        return 0;
    } else if (q == 1) {
        return p * n * (n + 1) / 2;
    } else if (p > q) {
        return div(p % q, q, n) + n * (n + 1) / 2 * (p / q);
    } else
        return n * (n * p / q) + (n / q) - div(q, p, n * p / q);
}

ll mod(ll p, ll q, ll n) {
    ll g = gcd(p, q);
    return p * n * (n + 1) / 2 - q * div(p / g, q / g, n);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        ll p, q, n;
        cin >> p >> q >> n;

        cout << mod(p, q, n) << '\n';
    }
}