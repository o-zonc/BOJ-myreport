#include <algorithm>
#include <iostream>

using namespace std;

#define MAX 10000

int rgb[1000][3], r[1000][3], g[1000][3], b[1000][3];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> rgb[i][0] >> rgb[i][1] >> rgb[i][2];
    }

    r[0][0] = MAX, r[0][1] = rgb[0][1], r[0][2] = rgb[0][2];
    g[0][0] = rgb[0][0], g[0][1] = MAX, g[0][2] = rgb[0][2];
    b[0][0] = rgb[0][0], b[0][1] = rgb[0][1], b[0][2] = MAX;

    for (int i = 1; i < n; i++) {
        r[i][0] = rgb[i][0] + min(r[i - 1][1], r[i - 1][2]);
        r[i][1] = rgb[i][1] + min(r[i - 1][0], r[i - 1][2]);
        r[i][2] = rgb[i][2] + min(r[i - 1][0], r[i - 1][1]);

        g[i][0] = rgb[i][0] + min(g[i - 1][1], g[i - 1][2]);
        g[i][1] = rgb[i][1] + min(g[i - 1][0], g[i - 1][2]);
        g[i][2] = rgb[i][2] + min(g[i - 1][0], g[i - 1][1]);

        b[i][0] = rgb[i][0] + min(b[i - 1][1], b[i - 1][2]);
        b[i][1] = rgb[i][1] + min(b[i - 1][0], b[i - 1][2]);
        b[i][2] = rgb[i][2] + min(b[i - 1][0], b[i - 1][1]);
    }

    cout << min(r[n - 1][0], min(g[n - 1][1], b[n - 1][2]));
}