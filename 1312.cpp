#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long a, b, n;
    cin >> a >> b >> n;

    int ans;
    for (int i = 0; i <= n; i++) {
        ans = a / b;
        a = a % b * 10;
    }

    cout << ans;
}