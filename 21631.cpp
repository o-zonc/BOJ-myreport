#include <iostream>

using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll a, b;
    cin >> a >> b;

    ll ans = (a >= b - 1) ? b : a + 1;
    cout << ans;
}