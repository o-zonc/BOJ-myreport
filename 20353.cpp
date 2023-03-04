#include <cmath>
#include <iostream>

using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll n;
    cin >> n;

    cout << fixed;
    cout.precision(12);
    cout << 4 * sqrtl(n);
}