#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, d;
    cin >> n >> d;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int x = i;
        while (x > 0) {
            if (x % 10 == d) ans++;
            x /= 10;
        }
    }

    cout << ans;
}