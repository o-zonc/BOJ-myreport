#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int x[4], y[4];
    for (int i = 0; i < 2; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 2; i < 4; i++) {
        cin >> x[i] >> y[i];
    }

    sort(x, x + 4);
    sort(y, y + 4);

    int ans = max(x[3] - x[0], y[3] - y[0]);

    cout << ans * ans;
}