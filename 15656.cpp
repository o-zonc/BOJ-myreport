#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int arr[9], val[9];

void dfs(int depth) {
    if (depth == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        arr[depth] = val[i];
        dfs(depth + 1);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }
    sort(val, val + n);

    dfs(0);
}