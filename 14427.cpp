#include <algorithm>
#include <iostream>

using namespace std;

const int MAX = 100000;
int arr[MAX + 1];
int tree[MAX * 4 + 1];

int minid(int a, int b) {
    if (arr[a] == arr[b]) return (a < b) ? a : b;
    return (arr[a] < arr[b]) ? a : b;
}

int init(int node, int start, int end) {
    if (start == end) return tree[node] = start;

    int mid = (start + end) / 2;
    return tree[node] = minid(init(node * 2, start, mid), init(node * 2 + 1, mid + 1, end));
}

int update(int node, int start, int end, int idx) {
    if (!(start <= idx && idx <= end) || start == end) return tree[node];

    int mid = (start + end) / 2;
    return tree[node] = minid(update(node * 2, start, mid, idx), update(node * 2 + 1, mid + 1, end, idx));
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    init(1, 0, n - 1);

    cin >> m;

    while (m--) {
        int q;
        cin >> q;

        if (q == 1) {
            int id, x;
            cin >> id >> x;

            arr[id - 1] = x;
            update(1, 0, n - 1, id - 1);
        } else {
            cout << tree[1] + 1 << '\n';
        }
    }
}