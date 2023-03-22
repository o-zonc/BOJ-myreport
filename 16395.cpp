#include <iostream>

using namespace std;

#define ll long long

ll dp[30][30];

ll c(int n, int k) {
    if (dp[n][k]) return dp[n][k];
    if (n == k || k == 0) return dp[n][k] = 1;

    return dp[n][k] = c(n - 1, k - 1) + c(n - 1, k);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    cout << c(a - 1, b - 1);
}