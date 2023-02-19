#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int arr[9], val[9];

void dfs(int depth, int l) {
    if (depth == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = l; i < n; i++) {
        arr[depth] = val[i];
        dfs(depth + 1, i);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    sort(val, val + n);
    dfs(0, 0);
}