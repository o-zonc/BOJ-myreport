#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    double xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    if (xa == xb && xb == xc) {
        cout << "-1" << '\n';
        return 0;
    } else if (ya == yb && yb == yc) {
        cout << "-1" << '\n';
        return 0;
    } else {
    }
    if ((ya - yb) * (xb - xc) == (yb - yc) * (xa - xb)) {
        cout << "-1" << '\n';
        return 0;
    }

    double ab, bc, ca;
    ab = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
    bc = sqrt(pow(xb - xc, 2) + pow(yb - yc, 2));
    ca = sqrt(pow(xc - xa, 2) + pow(yc - ya, 2));
    double len1 = (ab + bc) * 2;
    double len2 = (bc + ca) * 2;
    double len3 = (ca + ab) * 2;

    cout << fixed;
    cout.precision(10);
    cout << (max(len1, max(len2, len3)) - min(len1, min(len2, len3))) << '\n';
}