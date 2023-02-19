#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x, y;
    cin >> x >> y;

    if (x > 0 && y > 0) cout << 1;
    else if (x < 0 && y > 0) cout << 2;
    else if (x < 0 && y < 0) cout << 3;
    else cout << 4;

    return 0;
}