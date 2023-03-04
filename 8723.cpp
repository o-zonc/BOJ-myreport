#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    sort(a, a + 3);

    if (a[0] == a[1] && a[1] == a[2]) {
        cout << 2;
    } else if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) {
        cout << 1;
    } else {
        cout << 0;
    }
}