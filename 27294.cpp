#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t, s;
    cin >> t >> s;
    if (12 <= t && t <= 16) {
        if (s) cout << 280;
        else cout << 320;
    } else cout << 280;
}