#include <cmath>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    cout << fixed;
    cout.precision(9);
    cout << a + b - sqrt(a * a + b * b);
}