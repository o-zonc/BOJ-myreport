#include <iostream>

using namespace std;

#define ll long long

ll gcd(ll x, ll y) {
    return y ? gcd(y, x % y) : x;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll a, b;
    cin >> a >> b;

    cout << a * b / gcd(a, b);
}