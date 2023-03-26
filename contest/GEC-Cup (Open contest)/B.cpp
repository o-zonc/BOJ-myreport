#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int x, n;
    cin >> x >> n;

    while (n--) {
        if (x % 2)
            x *= 2;
        else
            x /= 2;
        x ^= 6;
    }

    cout << x;
}