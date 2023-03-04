#include <iostream>

using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll n, m;
    cin >> n >> m;

    if (n == m) {
        cout << 1;
    } else {
        cout << 0;
    }
}