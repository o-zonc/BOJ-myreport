#include <iostream>

using namespace std;

#define MAX 50000
int mobius[MAX + 1], psum[MAX + 1];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    mobius[1] = 1;
    for (int i = 1; i <= MAX; i++) {
        for (int j = 2 * i; j <= MAX; j += i) {
            mobius[j] -= mobius[i];
        }
    }

    for (int i = 1; i <= MAX; i++) {
        psum[i] = psum[i - 1] + mobius[i];
    }

    int k;
    cin >> k;

    while (k--) {
        int a, b, d;
        cin >> a >> b >> d;

        int ans = 0, i, j = 1;
        for (i = 1; i <= min(a / d, b / d); i = j + 1) {
            j = min(a / (a / i), b / (b / i));
            ans += (a / (i * d)) * (b / (i * d)) * (psum[j] - psum[i - 1]);
        }

        cout << ans << '\n';
    }
}