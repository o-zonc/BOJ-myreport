#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int p[4];
    for (int i = 0; i < 4; i++) {
        cin >> p[i];
    }

    int x, y, r;
    cin >> x >> y >> r;

    for (int i = 0; i < 4; i++) {
        if (x == p[i]) {
            cout << i + 1;
            return 0;
        }
    }

    cout << 0;
}