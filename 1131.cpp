#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

#define ll long long

const ll MAX = 1000000;
int k;
int dp[MAX + 1], loop[7][20] = {{0},
                                {1, 2, 3, 4, 5, 6, 7, 8, 9},
                                {1, 4},
                                {1, 371, 153, 55, 370, 160, 407, 919, 136},
                                {1, 1138, 8208, 2178, 1634, 9474},
                                {1, 24584, 9045, 10933, 9044, 244, 8299, 8294, 58618, 4150, 54748, 93084, 4151, 92727, 89883, 194979},
                                {1, 239459, 17148, 282595, 93531, 63804, 548834}};

ll snk(ll n) {
    ll ans = 0;

    while (n > 0) {
        ans += pow(n % 10, k);
        n /= 10;
    }
    return ans;
}

void init() {
    int i = 0, n;
    while (loop[k][i]) {
        n = loop[k][i];
        do {
            if (n <= 1000000) dp[n] = loop[k][i];
            n = snk(n);
        } while (n != loop[k][i]);
        ++i;
    }
}

ll dfs(ll n) {
    if (n > 1000000) return dfs(snk(n));
    if (dp[n]) return dp[n];
    return dp[n] = min(n, dfs(snk(n)));
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll a, b;
    cin >> a >> b >> k;

    init();

    ll ans = 0;
    for (ll i = a; i <= b; i++) {
        ans += dfs(i);
    }

    cout << ans;
}