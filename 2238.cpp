#include <iostream>
#include <string>
#include <vector>

using namespace std;

int cnt[10001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int u, n;
    cin >> u >> n;

    vector<pair<string, int> > v;
    while (n--) {
        string s;
        int x;
        cin >> s >> x;
        cnt[x]++;
        v.push_back(make_pair(s, x));
    }

    int m = 100001, ans = 0;
    for (int i = 1; i <= u; i++) {
        if (cnt[i] == 0) continue;
        if (m == cnt[i]) continue;
        m = min(m, cnt[i]);
        if (m == cnt[i]) ans = i;
    }

    int z = v.size();
    for (int i = 0; i < z; i++) {
        if (v[i].second == ans) {
            cout << v[i].first << ' ' << v[i].second;
            break;
        }
    }
}