#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define p pair<int, int>

const int MAX = 100000;
ll arr[MAX + 1], tree[MAX * 4 + 1], ret[MAX];

int cnt;

struct Query {
    int k, i, j, idx;
    Query(int a = 0, int b = 0, int c = 0, int d = 0) : k(a), i(b), j(c), idx(d) {}
};

bool compare(Query u, Query v) {
    if (u.k == v.k) return u.idx < v.idx;
    return u.k < v.k;
}

ll init(int node, int start, int end) {
    if (start == end) {
        return tree[node] = arr[start];
    }

    int mid = (start + end) / 2;

    return tree[node] = init(node * 2, start, mid) + init(node * 2 + 1, mid + 1, end);
}

ll update(int node, int start, int end, int idx, ll y) {
    if (!(start <= idx && idx <= end)) return tree[node];

    if (start == end) return tree[node] = y;

    int mid = (start + end) / 2;
    return tree[node] = update(node * 2, start, mid, idx, y) + update(node * 2 + 1, mid + 1, end, idx, y);
}

ll sum(int node, int start, int end, int left, int right) {
    if (left > end || right < start) {
        return 0;
    }

    if (left <= start && end <= right) {
        return tree[node];
    }

    int mid = (start + end) / 2;
    return sum(node * 2, start, mid, left, right) + sum(node * 2 + 1, mid + 1, end, left, right);
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    init(1, 1, n);

    cin >> m;

    vector<p> q1;
    vector<Query> q2;

    for (int i = 0; i < m; i++) {
        int d;
        cin >> d;
        if (d == 1) {
            int a, b;
            cin >> a >> b;
            q1.push_back(make_pair(a, b));
        } else {
            int a, b, c;
            cin >> a >> b >> c;
            q2.push_back(Query(a, b, c, cnt++));
        }
    }

    sort(q2.begin(), q2.end(), compare);

    int r = 0;

    for (int i = 0; i < q2.size(); i++) {
        while (q2[i].k > r) {
            update(1, 1, n, q1[r].first, q1[r].second);
            r++;
        }
        ret[q2[i].idx] = sum(1, 1, n, q2[i].i, q2[i].j);
    }

    for (int i = 0; i < q2.size(); i++) cout << ret[i] << '\n';
}