#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int visited[27][27];
int apt[27][27];

int count(int i, int j) {
    if (!visited[i][j] && apt[i][j]) {
        visited[i][j] = 1;
        return count(i + 1, j) + count(i, j - 1) + count(i, j + 1) + count(i - 1, j) + 1;
    }
    else return 0;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    char a;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a;
            apt[i][j] = a - '0';
        }
    }

    vector<int> loc;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (apt[i][j] == 0) continue;
            
            int l = count(i, j);
            if (l != 0) {
                loc.push_back(l);
            }
        }
    }

    int ans = loc.size();
    cout << ans << '\n';

    sort(loc.begin(), loc.end());
    for (int i = 0; i < ans; i++) {
        cout << loc[i] << '\n';
    }
}