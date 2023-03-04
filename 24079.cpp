#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int x, y, z;
    cin >> x >> y >> z;

    if (x + y <= z)
        cout << 1;
    else
        cout << 0;
}