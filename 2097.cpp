#include <iostream>

using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll n;
    cin >> n;

    if (n <= 2) {
        cout << 4;
        return 0;
    }

    ll i;
    for (i = 0; i * i < n; i++)
        ;

    ll x = n / i;
    ll y = (n % i ? i + 1 : i);

    cout << 2 * (x + y) - 4;
}