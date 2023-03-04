#include <cmath>
#include <iostream>

using namespace std;

#define pi 3.14159265l
#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll a;
    cin >> a;

    cout << fixed;
    cout.precision(10);
    cout << 2 * pi * sqrtl(a / pi);
}