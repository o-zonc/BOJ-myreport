#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a3, a2, a1, b3, b2, b1;
    cin >> a3 >> a2 >> a1 >> b3 >> b2 >> b1;

    int apple = a3 * 3 + a2 * 2 + a1;
    int banana = b3 * 3 + b2 * 2 + b1;

    if (apple > banana)
        cout << 'A';
    else if (apple < banana)
        cout << 'B';
    else
        cout << 'T';
}