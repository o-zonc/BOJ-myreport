#include <iostream>

using namespace std;

#define ll long long

ll gcd(ll x, ll y) {
    return y ? gcd(y, x % y) : x;
}

ll lcm(ll x, ll y) {
    return x * y / gcd(x, y);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;
    while (n--) {
        ll a, b;
        cin >> a >> b;
        cout << lcm(a, b) << '\n';
    }
}