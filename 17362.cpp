#include <iostream>

using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll n;
    cin >> n;

    int ans = ((n - 1) % 8 > 4) ? 4 - (n - 1) % 8 % 5 : (n - 1) % 8 + 1;
    cout << ans;
}