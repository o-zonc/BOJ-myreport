#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << '*';
    } else if (a == b) {
        cout << 'C';
    } else if (b == c) {
        cout << 'A';
    } else if (c == a) {
        cout << 'B';
    } else {
        cout << '*';
    }
}