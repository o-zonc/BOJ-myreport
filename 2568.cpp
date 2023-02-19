#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    vector<pair<int, int>> elec;
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        elec.push_back(make_pair(a, b));
    }

    sort(elec.begin(), elec.end());

    int idxv[t];

    vector<int> lis;
    lis.push_back(elec[0].second);
    idxv[0] = 0;
    for (int i = 1; i < t; i++) {
        if (lis.back() < elec[i].second) {
            lis.push_back(elec[i].second);
            idxv[i] = lis.size() - 1;
        } else {
            int idx = lower_bound(lis.begin(), lis.end(), elec[i].second) - lis.begin();
            lis[idx] = elec[i].second;
            idxv[i] = idx;
        }
    }

    vector<int> ans;
    cout << t - lis.size() << '\n';
    int maxidx = lis.size() - 1;
    for (int i = t - 1; i >= 0; i--) {
        if (idxv[i] == maxidx) {
            ans.push_back(i);
            maxidx--;
        }
    }

    int p = ans.back();
    ans.pop_back();
    for (int i = 0; i < t; i++) {
        if (p == i) {
            if (ans.empty()) continue;
            p = ans.back();
            ans.pop_back();
        } else {
            cout << elec[i].first << '\n';
        }
    }
}