#include <iostream>
#include <vector>

using namespace std;

#define ll long long

ll init(vector<ll> &arr, vector<ll> &tree, int node, int start, int end) {
    if (start == end) {
        return tree[node] = arr[start];
    }

    int mid = (start + end) / 2;

    return tree[node] = init(arr, tree, node * 2, start, mid) + init(arr, tree, node * 2 + 1, mid + 1, end);
}

ll update(vector<ll> &tree, int node, int start, int end, int idx, ll y) {
    if (!(start <= idx && idx <= end)) return tree[node];

    if (start == end) return tree[node] = y;

    int mid = (start + end) / 2;
    return tree[node] = update(tree, node * 2, start, mid, idx, y) + update(tree, node * 2 + 1, mid + 1, end, idx, y);
}

ll sum(vector<ll> &tree, int node, int start, int end, int left, int right) {
    if (left > end || right < start) {
        return 0;
    }

    if (left <= start && end <= right) {
        return tree[node];
    }

    int mid = (start + end) / 2;
    return sum(tree, node * 2, start, mid, left, right) + sum(tree, node * 2 + 1, mid + 1, end, left, right);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> arr, tree;
    for (int i = 0; i < n * 4; i++) {
        tree.push_back(0);
    }

    ll q;
    for (int i = 0; i < n; i++) {
        cin >> q;
        arr.push_back(q);
    }

    init(arr, tree, 1, 0, n - 1);

    ll a, b, c;
    for (int i = 0; i < m + k; i++) {
        cin >> a >> b >> c;
        if (a == 1) {
            update(tree, 1, 0, n - 1, b - 1, c);
        } else if (a == 2) {
            cout << sum(tree, 1, 0, n - 1, b - 1, c - 1) << '\n';
        }
    }
}