#include <iostream>

using namespace std;

int main() {
    int n, m, t, mn = 10003, cnt = 0, cola = 0, buger, mx = 0, j;
    cin >> n >> m >> t;

    if (n > t && m > t) {
        mx = 0, mn = t;
    }

    for (int i = 0; i <= t / n; i++) {
        j = (t - (i * n)) / m;
        cola = t - (i * n) - (j * m);
        buger = i + j;

        if (cola < mn) {
            mn = cola;
            mx = buger;
        } else if (cola == mn) {
            if (buger > mx) {
                mx = buger;
            }
        }
    }

    cout << mx << " " << mn;
}