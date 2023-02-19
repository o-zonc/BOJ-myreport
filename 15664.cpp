#include <algorithm>
#include <iostream>

using namespace std;

int n, m;
int arr[9], val[9];
bool visited[9] = {
    0,
};

void dfs(int depth, int l) {
    if (depth == m) {
        for (int i = 0; i < m; i++) {
            cout << val[arr[i]] << ' ';
        }
        cout << '\n';
        return;
    }

    int chk = 0;
    for (int i = l; i < n; i++) {
        if (!visited[i] && val[i] != chk) {
            visited[i] = true;
            chk = val[i];
            arr[depth] = i;
            dfs(depth + 1, i);
            visited[i] = false;
        }
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
    dfs(0, 0);
}