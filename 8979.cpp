#include <iostream>

using namespace std;

int n, k, idx, g[1001], s[1001], b[1001], ans;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> idx;
        cin >> g[idx] >> s[idx] >> b[idx];
    }

    for (int i = 1; i <= n; i++) {
        if (g[i] > g[k])
            ans++;
        else {
            if (g[i] == g[k] && s[i] > s[k])
                ans++;
            else {
                if (g[i] == g[k] && s[i] == s[k] && b[i] > b[k]) ans++;
            }
        }
    }

    cout << ans + 1;
}