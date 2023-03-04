#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int cnt = 0;
    for (int i = 0; i < 6; i++) {
        char wl;
        cin >> wl;

        if (wl == 'W') cnt++;
    }

    if (cnt >= 5)
        cout << 1;
    else if (cnt >= 3)
        cout << 2;
    else if (cnt >= 1)
        cout << 3;
    else
        cout << -1;
}