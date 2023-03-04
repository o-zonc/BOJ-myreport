#include <iostream>

using namespace std;

#define ld long double
#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ld a, b, c;
    cin >> a >> b >> c;

    ll ans = max(a * b / c, a / b * c);
    cout << ans;
}