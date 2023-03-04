#include <algorithm>
#include <iostream>

using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll a, b;
    cin >> a >> b;

    if (a % 2 == 0 || b % 2 == 0) {
        cout << 0;
    } else {
        cout << min(a, b);
    }
}