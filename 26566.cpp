#include <cmath>
#include <iostream>

using namespace std;

#define pi 3.141592653l

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        int a, p1, r, p2;
        cin >> a >> p1 >> r >> p2;

        double whole = (double)a / p1;
        double slice = (double)r * r * pi / p2;

        if (whole > slice) {
            cout << "Slice of pizza\n";
        } else {
            cout << "Whole pizza\n";
        }
    }
}