#include <iostream>

using namespace std;

int prime[1001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    int cnt = 0, ans;
    for (int i = 2; i <= n; i++) {
        if (prime[i] == 0) {
            for (int j = i; j <= n; j += i) {
                if (prime[j] == 0) {
                    prime[j] = 1;
                    cnt++;
                    if (cnt == k) {
                        ans = j;
                        break;
                    }
                }
            }
        }
    }

    cout << ans;
}