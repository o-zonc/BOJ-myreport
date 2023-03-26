#include <iostream>

using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll x, n;
    cin >> x >> n;

    ll i;
    for (int i = 1; i <= n; i++) {
        if (x % 2)
            x <<= 1;
        else
            x >>= 1;
        x ^= 6;
    }

    cout << x;
}