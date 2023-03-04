#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int x, l, r;
    cin >> x >> l >> r;

    if (x < l) {
        cout << l;
    } else if (x > r) {
        cout << r;
    } else {
        cout << x;
    }
}