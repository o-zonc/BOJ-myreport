#include <iostream>

using namespace std;

const int MAX = 100000;
int arr[MAX + 1], tree[MAX * 4 + 1];

int minx(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    return (a < b) ? a : b;
}

int init(int node, int start, int end) {
    if (start == end) return tree[node] = arr[start];

    int mid = (start + end) / 2;
    return tree[node] = minx(init(node * 2, start, mid), init(node * 2 + 1, mid + 1, end));
}

int update(int node, int start, int end, int idx, int y) {
    if (!(start <= idx && idx <= end)) return tree[node];

    if (start == end) return tree[node] = y;

    int mid = (start + end) / 2;
    return tree[node] = minx(update(node * 2, start, mid, idx, y), update(node * 2 + 1, mid + 1, end, idx, y));
}

int query(int node, int start, int end, int left, int right) {
    if (start > right || left > end) return 0;

    if (left <= start && end <= right) return tree[node];

    int mid = (start + end) / 2;
    return minx(query(node * 2, start, mid, left, right), query(node * 2 + 1, mid + 1, end, left, right));
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
        int q;
        cin >> q;

        if (q == 1) {
            int id, vl;
            cin >> id >> vl;
            update(1, 1, n, id, vl);
        } else {
            int i, j;
            cin >> i >> j;
            cout << query(1, 1, n, i, j) << '\n';
        }
    }
}