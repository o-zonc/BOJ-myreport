#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int dp[1000001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int maxi = 0;
    dp[0] = 0;
    for (int x = 1; x <= n; x++) {
        int i;
        cin >> i;
        dp[i] = dp[i - 1] + 1;
        maxi = max(maxi, dp[i]);
    }

    cout << n - maxi << '\n';
}