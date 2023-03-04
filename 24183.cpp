#include <iostream>

using namespace std;

#define c4 2 * 0.229 * 0.324
#define a3 2 * 0.297 * 0.420
#define a4 0.210 * 0.297

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c;
    cin >> a >> b >> c;

    cout << fixed;
    cout.precision(7);
    cout << a * c4 + b * a3 + c * a4;
}