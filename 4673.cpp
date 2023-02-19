#include <iostream>

using namespace std;

int dp[13000];

int d(int n) {
    int ans = n;
    while (n > 0) {
        ans += n % 10;
        n /= 10;
    }

    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    for (int i = 1; i <= 10000; i++) {
        dp[d(i)]++;
    }

    int cnt = 0;
    for (int i = 1; i <= 10000; i++) {
        if (dp[i] == 0) cout << i << '\n';
    }
}