#include <iostream>

using namespace std;

int paper[100][100];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        for (int i = x - 1; i < x + 9; i++) {
            for (int j = y - 1; j < y + 9; j++) {
                paper[i][j] = 1;
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            cnt += paper[i][j];
        }
    }

    cout << cnt;
}