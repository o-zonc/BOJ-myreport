#include <cmath>
#include <iostream>

using namespace std;

#define ld long double

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    ld m = (b - a) / 400.0;
    cout << fixed;
    cout.precision(10);
    cout << 1 / (1 + pow(10, m));
}