#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int h1, m1, s1, h2, m2, s2;
    char col;

    cin >> h1 >> col >> m1 >> col >> s1 >> h2 >> col >> m2 >> col >> s2;

    int sec1 = h1 * 3600 + m1 * 60 + s1;
    int sec2 = h2 * 3600 + m2 * 60 + s2;

    int ans = (sec2 < sec1) ? 86400 + sec2 - sec1 : sec2 - sec1;

    cout << ans;
}