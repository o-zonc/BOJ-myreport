#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define MOD 1000000007
#define ll long long

int dp[1000001], lis[1000001];
vector<ll> num[1000001], sum[1000001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int len = 0;

    for (int i = 0; i < n; i++) {
        int idx = lower_bound(lis, lis + len, arr[i]) - lis;
        lis[idx] = arr[i];
        dp[i] = idx + 1;
        len = max(len, dp[i]);
    }

    for (int i = 1; i <= len; i++) {
        sum[i].push_back(0);
    }

    for (int i = n - 1; i >= 0; i--) {
        int v = 1, l = dp[i];

        if (l < len) {
            int idx = upper_bound(num[l + 1].begin(), num[l + 1].end(), arr[i]) - num[l + 1].begin();
            v = sum[l + 1].back() - sum[l + 1][idx];
        }
        num[l].push_back(arr[i]);
        sum[l].push_back((v + sum[l].back()) % MOD);
    }

    cout << len << ' ' << (sum[1].back() + MOD) % MOD;
}
