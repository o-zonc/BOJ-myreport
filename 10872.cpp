#include <iostream>

using namespace std;

int dp[15];

int facto(unsigned int n) {
    if (n <= 1) {
        dp[n] = 1;
        return dp[n];
    }
    if (dp[n] != 0) return dp[n];
    dp[n] = facto(n - 1) * n;
    return dp[n];
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    cout << facto(n);
}