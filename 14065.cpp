#include <iostream>

using namespace std;

#define GALLON 3.785411784
#define MILE 1609.344

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout << fixed;
    cout.precision(12);

    double x;
    cin >> x;

    double ans = (100000 / MILE) / x * GALLON;

    cout << ans;
}