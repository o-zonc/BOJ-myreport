#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int z;
    cin >> z;

    for (int i = 0; i < z; i++) {
        int w, k;
        cin >> w >> k;

        cout << w * k / 2 << '\n';
    }
}