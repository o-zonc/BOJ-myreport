#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int ans = 0;
    while (true) {
        int n;
        cin >> n;

        if (n == -1) break;

        ans += n;
    }

    cout << ans;
}