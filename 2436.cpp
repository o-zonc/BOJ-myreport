#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int gcd(int a, int b) {
    return (a % b) ? gcd(b, a % b) : b;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll a, b;
    cin >> a >> b;

    ll x = b / a;
    ll c = sqrt(x);

    vector<ll> v;
    for (int i = 1; i <= c; i++) {
        if (x % i == 0 && gcd(i, x / i) == 1) v.push_back(i);
    }

    cout << a * v.back() << ' ' << a * (x / v.back());
}