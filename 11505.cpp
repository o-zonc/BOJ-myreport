#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

#define MOD 1000000007
#define ll long long

vector<int> v;
vector<ll> tree;

ll init(int node, int start, int end) {
    if (start == end) {
        return tree[node] = v[start];
    } else {
        return tree[node] = init(node * 2, start, (start + end) / 2) * init(node * 2 + 1, (start + end) / 2 + 1, end) % 1000000007;
    }
}

ll update(int node, int start, int end, int idx, int num) {
    if (idx > end || idx < start) {
        return tree[node];
    }
    if (start == end) {
        return tree[node] = num;
    }
    return tree[node] = update(node * 2, start, (start + end) / 2, idx, num) * update(node * 2 + 1, (start + end) / 2 + 1, end, idx, num) % 1000000007;
}

ll prod(int node, int start, int end, int left, int right) {
    if (left > end || right < start) {
        return 1;
    }
    if (left <= start && right >= end) {
        return tree[node];
    } else {
        return prod(node * 2, start, (start + end) / 2, left, right) * prod(node * 2 + 1, (start + end) / 2 + 1, end, left, right) % 1000000007;
    }
}

int main() {
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);

    v.resize(n);
    int h = (int)ceil(log2(n));
    int vector_size = (1 << (h + 1));
    tree.resize(vector_size);

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    init(1, 0, n - 1);
    
    for (int i = 0; i < m + k; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (a == 1) {
            update(1, 0, n - 1, b - 1, c);
        } else if (a == 2) {
            cout << prod(1, 0, n - 1, b - 1, c - 1) << "\n";
        }
    }
}