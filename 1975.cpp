#include <iostream>

using namespace std;

int f(int n, int b) {
    int cnt = 0;
    while (n) {
        if (n % b == 0)
            cnt++;
        else
            break;
        n /= b;
    }
    return cnt;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int ans = 0;
        for (int j = 2; j <= 1000; j++) {
            ans += f(n, j);
        }

        cout << ans << '\n';
    }
}