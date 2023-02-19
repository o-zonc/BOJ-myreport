#include <algorithm>
#include <iostream>

using namespace std;

int n, m;
int arr[9], val[9];
bool visited[9] = {
    0,
};

void dfs(int depth) {
    if (depth == m) {
        for (int i = 0; i < m; i++) {
            cout << val[arr[i]] << " ";
        }
        cout << '\n';
        return;
    }

    int chk = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i] && val[i] != chk) {
            visited[i] = true;
            chk = val[i];
            arr[depth] = i;
            dfs(depth + 1);
            visited[i] = false;
        }
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
    dfs(0);
}