#include <iostream>

using namespace std;

int arr[10][10], l[20], r[20], ans[2], n;

void track(int x, int y, int d, int c) {
    if (y >= n) {
        x++;
        if (y % 2 == 0)
            y = 1;
        else
            y = 0;
    }
    if (x >= n) {
        ans[c] = max(ans[c], d);
        return;
    }

    if (arr[x][y] && !l[y - x + n - 1] && !r[x + y]) {
        l[y - x + n - 1] = r[x + y] = 1;
        track(x, y + 2, d + 1, c);
        l[y - x + n - 1] = r[x + y] = 0;
    }
    track(x, y + 2, d, c);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    track(0, 0, 0, 0);
    track(0, 1, 0, 1);

    cout << ans[0] + ans[1];
}