#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int x, y;
    cin >> x >> y;

    if (x < y)
        cout << y - x;
    else
        cout << x + y;
}