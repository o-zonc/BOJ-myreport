#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int t = 0;
    if (a < 0) {
        t += abs(a) * c;
        t += d;
        a = 0;
    }
    t += (b - a) * e;

    cout << t;
}