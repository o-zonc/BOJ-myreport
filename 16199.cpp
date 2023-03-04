#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int y1, m1, d1, y2, m2, d2;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;

    int old, old2;
    old = y2 - y1;
    if (m1 > m2) {
        old--;
    } else if (m1 == m2) {
        if (d1 > d2) {
            old--;
        }
    }
    old2 = y2 - y1 + 1;

    cout << old << '\n' << old2-- << '\n';
    cout << old2;
}