#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int b;
    cin >> b;

    int p = 5 * b - 400;

    cout << p << '\n';
    if (p < 100)
        cout << 1;
    else if (p > 100)
        cout << -1;
    else
        cout << 0;
}