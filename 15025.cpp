#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int l, r;
    cin >> l >> r;

    if (l == 0 && r == 0) {
        cout << "Not a moose";
    } else if (l == r) {
        cout << "Even " << 2 * r;
    } else {
        cout << "Odd " << 2 * max(l, r);
    }
}