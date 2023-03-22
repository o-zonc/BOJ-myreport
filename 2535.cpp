#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define p pair<int, pair<int, int> >

bool cmp(p a, p b) {
    return a.second.second > b.second.second;
}

int cnt[101];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int a, b, c;
    vector<p> st;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        st.push_back(pair(a, pair(b, c)));
    }

    sort(st.begin(), st.end(), cmp);

    int d = 0;
    for (auto it : st) {
        if (d == 3) break;
        if (cnt[it.first] < 2) {
            cout << it.first << ' ' << it.second.first << '\n';
            cnt[it.first]++;
            d++;
        }
    }
}