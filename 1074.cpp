#include <iostream>

using namespace std;

int n, r, c, ans;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> r >> c;

    int y = 1 << (n - 1);
    int x = y;

    while (n--) {
        int t = (1 << (n - 1));
        int s = (1 << (2 * n));

        if (r < y && c < x) {
            x -= t;
            y -= t;
        } else if (r < y && c >= x) {
            x += t;
            y -= t;
            ans += s;
        } else if (r >= y && c < x) {
            x -= t;
            y += t;
            ans += s * 2;
        } else {
            x += t;
            y += t;
            ans += s * 3;
        }
    }

    cout << ans;
}