#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 5; i <= n; i *= 5) {
        cnt += n / i;
    }

    if (n <= 4) cout << 0;
    else cout << cnt;
}