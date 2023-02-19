#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int dp[1000005];
vector<int> res;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int x, n;
    cin >> x;
    n = x;

    for (int i = 2; i <= x; i++) {
        if (i % 6 == 0) {
            dp[i] = min(dp[i - 1], min(dp[i / 2], dp[i / 3])) + 1;
        } else if (i % 3 == 0) {
            dp[i] = min(dp[i - 1], dp[i / 3]) + 1;
        } else if (i % 2 == 0) {
            dp[i] = min(dp[i - 1], dp[i / 2]) + 1;
        } else {
            dp[i] = dp[i - 1] + 1;
        }
    }

    res.push_back(x);
    if (x - 1) {
        for (int i = x - 1; i >= 1; i--) {
            if (i == x - 1 && dp[i] == dp[x] - 1) {
                res.push_back(i);
                x = i;
            } else if (x == 2 * i && dp[i] == dp[x] - 1) {
                res.push_back(i);
                x = i;
            } else if (x == 3 * i && dp[i] == dp[x] - 1) {
                res.push_back(i);
                x = i;
            }
        }
    }

    cout << dp[n] << '\n';
    for (auto i : res) cout << i << ' ';
}