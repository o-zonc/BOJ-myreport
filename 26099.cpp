#include <iostream>

using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll n, cnt;
    cin >> n;

    if (n == 1 || n == 2 || n == 4 || n == 7) {
        cnt = -1;
    } else {
        int i;
        for (i = 0; i < n; i++) {
            if ((n - 3 * i) % 5 == 0) {
                break;
            }
        }

        cnt = (n - 3 * i) / 5 + i;
    }
    cout << cnt;
}