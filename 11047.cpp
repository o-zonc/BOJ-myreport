#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    int a;
    int coin[n];
    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    int i = 1;
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (coin[i] > k) continue;
        else {
            cnt += k / coin[i];
            k %= coin[i];
        }
    }

    cout << cnt << '\n';
}