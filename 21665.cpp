#include <iostream>

using namespace std;

char pic[100][100];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> pic[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char w;
            cin >> w;
            if (pic[i][j] == w) cnt++;
        }
    }

    cout << cnt;
}