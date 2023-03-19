#include <iostream>

using namespace std;

int n, b[1003][1003];
char a[1003][1003];

int makesum(int x, int y) {
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    int sum = 0;
    for (int i = 0; i < 8; i++) {
        if ('0' <= a[x + dx[i]][y + dy[i]] && a[x + dx[i]][y + dy[i]] <= '9') {
            sum += a[x + dx[i]][y + dy[i]] - '0';
        }
    }

    return sum;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == '.') {
                int ans = makesum(i, j);
                if (ans >= 10)
                    cout << "M";
                else
                    cout << ans;
            } else
                cout << '*';
        }
        cout << '\n';
    }
}