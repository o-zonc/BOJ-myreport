#include <iostream>

using namespace std;

int pic[101][101];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    while (n--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int i = x1; i <= x2; i++)
            for (int j = y1; j <= y2; j++)
                pic[i][j]++;
    }

    int ans = 0;
    for (int i = 1; i <= 100; i++)
        for (int j = 1; j <= 100; j++)
            if (pic[i][j] > m) ans++;

    cout << ans;
}