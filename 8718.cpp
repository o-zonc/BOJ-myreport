#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int x, k;
    cin >> x >> k;

    if (7 * k <= x) {
        cout << 7 * k * 1000;
    } else if (3.5 * k <= x) {
        cout << 3500 * k;
    } else if (1.75 * k <= x) {
        cout << 1750 * k;
    } else {
        cout << 0;
    }
}