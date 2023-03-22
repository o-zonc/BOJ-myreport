#include <iostream>

using namespace std;

char now[100][100];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> now[i][j];

    for (int i = 0; i < n; i++) {
        int cloud = -1;
        for (int j = 0; j < m; j++) {
            if (now[i][j] == 'c') cloud = 0;

            cout << cloud << ' ';
            if (cloud != -1) cloud++;
        }
        cout << '\n';
    }
}