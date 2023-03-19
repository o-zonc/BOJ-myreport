#include <iostream>

using namespace std;

#define ll long long

bool prime[1000001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    ll ans = 0;
    for (int i = 2; i <= n; i++) {
        if (!prime[i]) {
            ans += i;
            for (int j = 2 * i; j <= n; j += i) {
                if (!prime[j]) {
                    ans += i;
                }
                prime[j] = 1;
            }
        }
    }

    cout << ans;
}