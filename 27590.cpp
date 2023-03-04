#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for (int i = 1;; i++) {
        if ((i + a) % b == 0 && (i + c) % d == 0) {
            cout << i;
            break;
        }
    }
}