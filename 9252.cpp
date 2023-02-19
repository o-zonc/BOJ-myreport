#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int dp[1001][1001];
string a, b;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> a >> b;

    for (int i = 1; i <= a.length(); i++) {
        for (int j = 1; j <= b.length(); j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    int x = a.length(), y = b.length();

    if (dp[x][y] != 0) {
        cout << dp[x][y] << '\n';
        vector<char> ans;
        while (true) {
            if (x == 0 || y == 0) break;
            if (a[x - 1] == b[y - 1]) {
                ans.push_back(a[x - 1]);
                x--;
                y--;
            } else if (dp[x][y] == dp[x][y - 1])
                y--;
            else
                x--;
        }
        for (int i = ans.size() - 1; i >= 0; i--) {
            cout << ans[i];
        }
    } else
        cout << 0;
}