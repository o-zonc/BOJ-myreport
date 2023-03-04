#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, x, b, y, t;
    cin >> a >> x >> b >> y >> t;

    int one = (t > 30) ? (t - 30) * x * 21 + a : a;
    int two = (t > 45) ? (t - 45) * y * 21 + b : b;
    cout << one << ' ' << two;
}