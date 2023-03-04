#include <iostream>

using namespace std;

#define ll long long

const int MAX = 500000;
ll sum, xorx;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int m, q, x;
    cin >> m;

    while (m--) {
        cin >> q;
        if (q == 1) {
            cin >> x;
            sum += x;
            xorx ^= x;
        } else if (q == 2) {
            cin >> x;
            sum -= x;
            xorx ^= x;
        } else if (q == 3)
            cout << sum << '\n';
        else
            cout << xorx << '\n';
    }
}