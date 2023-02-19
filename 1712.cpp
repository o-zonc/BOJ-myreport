#include <cmath>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c;
    cin >> a >> b >> c;

    int d = c - b;

    if (d <= 0) {
        cout << -1;
    } else {
        cout << a / d + 1;
    }
}