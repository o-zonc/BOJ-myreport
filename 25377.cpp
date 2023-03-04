#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int ans = 50000;
    while (n--) {
        int a, b;
        cin >> a >> b;

        if (a <= b) ans = min(ans, b);
    }

    if (ans == 50000)
        cout << -1;
    else
        cout << ans;
}