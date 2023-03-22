#include <iostream>
#include <string>

using namespace std;

char ring[101][21];
string target;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> target;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 10; j++) {
            cin >> ring[i][j];
            ring[i][j + 10] = ring[i][j];
        }

    int l = target.length(), cnt = 0;

    for (int i = 0; i < n; i++) {
        bool flag = 0;
        for (int j = 0; j < 21 - l; j++) {
            for (int k = 0; k < l; k++) {
                if (ring[i][j + k] != target[k]) break;
                if (ring[i][j + k] == target[k] && k == l - 1) flag = 1;
            }
        }
        if (flag) cnt++;
    }

    cout << cnt;
}