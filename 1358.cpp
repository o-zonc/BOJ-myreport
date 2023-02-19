#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int w, h, x, y, p;
    cin >> w >> h >> x >> y >> p;

    int r = h / 2;

    int cnt = 0;
    for (int i = 0; i < p; i++) {
        int xp, yp;
        cin >> xp >> yp;

        if (x <= xp && xp <= x + w && y <= yp && yp <= y + h)
            cnt++;
        else {
            int distxy = (x - xp) * (x - xp) + (y + r - yp) * (y + r - yp);
            int disthw = (x + w - xp) * (x + w - xp) + (y + r - yp) * (y + r - yp);
            if (disthw <= r * r || distxy <= r * r) cnt++;
        }
    }

    cout << cnt << '\n';
}