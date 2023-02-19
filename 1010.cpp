#include <iostream>

using namespace std;

long long dp[31][31];

int combi(int n, int m) {
    if (dp[n][m] != 0)
        return dp[n][m];
    else {
        dp[n][m] = combi(n - 1, m - 1) + combi(n - 1, m);
        return dp[n][m];
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    for (int i = 0; i < 31; i++) {
        dp[i][0] = 1;
        dp[i][i] = 1;
    }

    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;

        long long com = combi(m, n);
        cout << com << '\n';
    }
}