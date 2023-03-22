#include <iostream>

using namespace std;

#define ll long long

ll leastbit(ll x) {
    return x ^ (x & (x - 1));
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;
    ll a[n], sum = 0, xo = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        xo ^= a[i];
    }

    if (xo == 0) {
        int cur = 0;
        for (int i = 1; i < n; ++i) {
            if (leastbit(a[i]) < leastbit(a[cur])) {
                cur = i;
            }
        }
        cout << sum << '\n'
             << (cur + 1) << " 1";
    } else {
        ll maxTurn = 0;
        int bestIndex = 0;

        for (int i = 0; i < n; ++i) {
            ll need = a[i] ^ xo;
            if (need < a[i]) {
                if (a[i] - need > maxTurn) {
                    maxTurn = a[i] - need;
                    bestIndex = i;
                }
            }
        }

        cout << sum - maxTurn + 1 << '\n'
             << (bestIndex + 1) << ' ' << maxTurn;
    }
}