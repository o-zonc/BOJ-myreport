#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int l;
    cin >> l;

    if (l % 5) {
        cout << l / 5 + 1;
    } else cout << l / 5;
}