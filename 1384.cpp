#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t = 1;
    while (true) {
        int n;
        cin >> n;

        if (!n) break;

        string name[n];
        char pn[n][n - 1];
        for (int i = 0; i < n; i++) {
            cin >> name[i];
            for (int j = 0; j < n - 1; j++) {
                cin >> pn[i][j];
            }
        }

        cout << "Group " << t++ << '\n';

        bool flag = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (pn[i][j] == 'N') {
                    cout << name[(i - j + n - 1) % n] << " was nasty about " << name[i] << '\n';
                    flag = false;
                }
            }
        }

        if (flag) cout << "Nobody was nasty\n";
        cout << '\n';
    }
}