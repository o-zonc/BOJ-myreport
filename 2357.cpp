#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define MAX 1000000003

ll mininit(vector<ll> &arr, vector<ll> &tree, int node, int start, int end) {
    if (start == end) {
        return tree[node] = arr[start];
    }

    int mid = (start + end) / 2;
    return tree[node] = min(mininit(arr, tree, node * 2, start, mid), mininit(arr, tree, node * 2 + 1, mid + 1, end));
}

ll maxinit(vector<ll> &arr, vector<ll> &tree, int node, int start, int end) {
    if (start == end) {
        return tree[node] = arr[start];
    }

    int mid = (start + end) / 2;
    return tree[node] = max(maxinit(arr, tree, node * 2, start, mid), maxinit(arr, tree, node * 2 + 1, mid + 1, end));
}

ll findmin(vector<ll> &tree, int node, int start, int end, int left, int right) {
    if (left > end || start > right) {
        return MAX;
    }

    if (left <= start && end <= right) {
        return tree[node];
    }

    int mid = (start + end) / 2;
    return min(findmin(tree, node * 2, start, mid, left, right), findmin(tree, node * 2 + 1, mid + 1, end, left, right));
}

ll findmax(vector<ll> &tree, int node, int start, int end, int left, int right) {
    if (left > end || start > right) {
        return 0;
    }

    if (left <= start && end <= right) {
        return tree[node];
    }

    int mid = (start + end) / 2;
    return max(findmax(tree, node * 2, start, mid, left, right), findmax(tree, node * 2 + 1, mid + 1, end, left, right));
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<ll> arr, ntree, xtree;
    arr.resize(n);
    ntree.resize(n * 4);
    xtree.resize(n * 4);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mininit(arr, ntree, 1, 0, n - 1);
    maxinit(arr, xtree, 1, 0, n - 1);

    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;

        cout << findmin(ntree, 1, 0, n - 1, l - 1, r - 1) << ' ' << findmax(xtree, 1, 0, n - 1, l - 1, r - 1) << '\n';
    }
}