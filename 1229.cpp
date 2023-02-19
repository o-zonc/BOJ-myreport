#include <algorithm>
#include <iostream>

using namespace std;

int hexa[709], ans[1000001] = {
                   0,
                   1,
                   2,
                   3,
                   4,
                   5,
                   1,
                   2,
                   3,
                   4,
                   5,
                   6,
                   2,
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 1; i < 709; i++) {
        hexa[i] = i * (2 * i - 1);
    }

    int n;
    cin >> n;

    int mval = 10;
    if (n > 12) {
        int lbd = lower_bound(hexa, hexa + 709, n) - hexa;
        for (int i = 13; i <= n; i++) {
            mval = 10;
            for (int j = 1; j <= lbd; j++) {
                if (hexa[j] > i) break;
                mval = min(mval, ans[i - hexa[j]]);
            }
            ans[i] = mval + 1;
        }
    }

    cout << ans[n];
}