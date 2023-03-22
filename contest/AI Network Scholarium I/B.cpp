#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define ll long long

const int MAX = 200000;
ll arr[MAX + 1], tree[4 * MAX + 1];
vector<int> v;

ll init(int node, int start, int end) {
    if (start == end) return tree[node] = arr[start];

    int mid = (start + end) / 2;
    return tree[node] = init(node * 2, start, mid) + init(node * 2 + 1, mid + 1, end);
}

ll sum(int node, int start, int end, int left, int right) {
    if (right < start || end < left) return 0;

    if (left <= start && end <= right) return tree[node];

    int mid = (start + end) / 2;
    return sum(node * 2, start, mid, left, right) + sum(node * 2 + 1, mid + 1, end, left, right);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    init(1, 1, n);

    while (q--) {
        int p, s, e;
        cin >> p;
        if (p == 1) {
            cin >> s;
            if (v.empty()) {
                v.push_back(s);
            } else {
                v.insert(lower_bound(v.begin(), v.end(), s), s);
            }
        } else {
            cin >> s >> e;
            if (v.empty()) {
                cout << sum(1, 1, n, s, e) << '\n';
            } else {
                int t = s;
                int idx = lower_bound(v.begin(), v.end(), e) - v.begin();
                if (s <= v[idx - 1] + 1 && v[idx - 1] + 1 <= e) t = v[idx - 1] + 1;
                cout << sum(1, 1, n, t, e) << '\n';
            }
        }
    }
}