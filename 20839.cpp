#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, c, e, x, y, z;
    cin >> x >> y >> z >> a >> c >> e;

    if (a == x && c == y && e == z)
        cout << 'A';
    else if (c == y && e == z) {
        if (a >= (x + 1) / 2)
            cout << 'B';
        else
            cout << 'C';
    } else {
        if (c >= (y + 1) / 2)
            cout << 'D';
        else
            cout << 'E';
    }
}