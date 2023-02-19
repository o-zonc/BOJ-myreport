#include <algorithm>
#include <iostream>

using namespace std;
#define ll long long

pair<ll, ll> arr[500005];
ll tree[2000006], ans;

ll query(int cur, int s, int e, int qs, int qe) {
    if (e < qs || qe < s) return 0;
    if (qs <= s && e <= qe) return tree[cur];
    ll mid = (s + e) >> 1;
    ll left = query(2 * cur, s, mid, qs, qe);
    ll right = query(2 * cur + 1, mid + 1, e, qs, qe);
    return left + right;
}

void update(int cur, int s, int e, int idx) {
    if (s == e) {
        tree[cur] = 1;
        return;
    }
    int mid = (s + e) >> 1;
    if (idx <= mid)
        update(2 * cur, s, mid, idx);
    else
        update(2 * cur + 1, mid + 1, e, idx);
    tree[cur] = tree[2 * cur] + tree[2 * cur + 1];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int ipt;
        cin >> ipt;
        arr[i] = make_pair(ipt, i);
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        int idx = arr[i].second;
        ans += query(1, 0, n - 1, idx + 1, n - 1);
        update(1, 0, n - 1, idx);
    }
    cout << ans;
}