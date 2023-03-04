#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int p, q;
    cin >> p >> q;

    if (p <= 50 && q <= 10)
        cout << "White";
    else if (q > 30)
        cout << "Red";
    else
        cout << "Yellow";
}