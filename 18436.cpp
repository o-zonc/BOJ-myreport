#include <iostream>

using namespace std;

const int MAX = 100000;
int arr[MAX + 1], tree[MAX * 4 + 1];

int init(int node, int start, int end) {
    if (start == end) return tree[node] = (arr[start] + 1) % 2;

    int mid = (start + end) / 2;
    return tree[node] = init(node * 2, start, mid) + init(node * 2 + 1, mid + 1, end);
}

int update(int node, int start, int end, int idx, int y) {
    if (!(start <= idx && idx <= end)) return tree[node];

    if (start == end) return tree[node] = y;

    int mid = (start + end) / 2;
    return tree[node] = update(node * 2, start, mid, idx, y) + update(node * 2 + 1, mid + 1, end, idx, y);
}

int query(int node, int start, int end, int left, int right) {
    if (right < start || end < left) return 0;

    if (left <= start && end <= right) return tree[node];

    int mid = (start + end) / 2;
    return query(node * 2, start, mid, left, right) + query(node * 2 + 1, mid + 1, end, left, right);
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
    while (m--) {
        int q, a, b;
        cin >> q >> a >> b;

        if (q == 1)
            update(1, 1, n, a, (b + 1) % 2);
        else if (q == 2)
            cout << query(1, 1, n, a, b) << '\n';
        else
            cout << (b - a) - query(1, 1, n, a, b) + 1 << '\n';
    }
}