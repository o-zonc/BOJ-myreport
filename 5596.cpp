#include <algorithm>
#include <iostream>

using namespace std;

int mgk, man;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 0; i < 8; i++) {
        int k;
        cin >> k;

        if (i / 4 == 0) {
            mgk += k;
        } else if (i / 4 == 1) {
            man += k;
        }
    }

    cout << max(mgk, man);
}