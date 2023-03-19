#include <iostream>

using namespace std;

#define ll long long

ll fibo[81] = {0, 1};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];

    ll ans = 0;
    if (n >= 3) {
        ans = 4 * fibo[n] + fibo[n - 1] + fibo[n - 2] + fibo[n - 3];
    } else if (n == 2) {
        ans = 6;
    } else {
        ans = 4;
    }

    cout << ans;
}