#include <cstring>
#include <iostream>
#include <vector>

using namespace std;
vector<int> v;
int dp[5][5][100001], sz;

int cal(int foot, int next) {
    if (foot == next) return 1;
    if (foot == 0) return 2;
    if (abs(foot - next) == 2) return 4;
    return 3;
}

int dfs(int l = 0, int r = 0, int idx = 0) {
    if (idx >= sz) return 0;
    int &ret = dp[l][r][idx];
    if (ret != -1) return ret;
    return ret = min(dfs(v[idx], r, idx + 1) + cal(l, v[idx]), dfs(l, v[idx], idx + 1) + cal(r, v[idx]));
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        v.push_back(n);
    }

    sz = v.size();
    memset(dp, -1, sizeof(dp));
    cout << dfs() << "\n";
}