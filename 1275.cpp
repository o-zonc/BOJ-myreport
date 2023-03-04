#include <iostream>

using namespace std;

#define ll long long

const int MAX = 100000;
ll arr[MAX + 1], tree[MAX * 4 + 1];

ll init(int node, int start, int end) {
    if (start == end) return tree[node] = arr[start];

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
    if (right < start || left > end) return 0;

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
        int i, j, id;
        ll vl;
        cin >> i >> j >> id >> vl;

        if (i > j)
            cout << sum(1, 1, n, j, i) << '\n';
        else
            cout << sum(1, 1, n, i, j) << '\n';

        update(1, 1, n, id, vl);
    }
}