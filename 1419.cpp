#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int l, r, k;
    cin >> l >> r >> k;

    int ans;
    if (k == 2) {
        int left = max(3, l);
        ans = r - left + 1;
    } else if (k == 3) {
        int left = max(6, l);
        int cnt = 0;
        for (int i = left; i <= r; i++) {
            if (i % 3 == 0) cnt++;
        }
        ans = cnt;
    } else if (k == 4) {
        int left = max(10, l);
        int cnt = 0;
        for (int i = left; i <= r; i++) {
            if (i == 12)
                continue;
            else if (i % 2 == 0)
                cnt++;
        }
        ans = cnt;
    } else if (k == 5) {
        int left = max(15, l);
        int cnt = 0;
        for (int i = left; i <= r; i++) {
            if (i % 5 == 0) cnt++;
        }
        ans = cnt;
    }

    cout << ans << '\n';
}