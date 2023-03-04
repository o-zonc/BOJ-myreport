#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int k, n, m;
    cin >> k >> n >> m;

    int ans = (k * n - m < 0) ? 0 : k * n - m;
    cout << ans;
}