#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int p, m;
    cin >> p >> m;

    int w = (p + m) / 2, l = (p - m) / 2;

    if (w < 0 || l < 0 || (p + m) % 2 || (p - m) % 2) {
        cout << -1;
    } else {
        cout << w << ' ' << l;
    }
}