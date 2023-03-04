#include <iostream>

using namespace std;

#define pi 3.141592l

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int d1, d2;
    cin >> d1 >> d2;

    cout << fixed;
    cout.precision(10);
    cout << 2 * d1 + 2 * pi * d2;
}