#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int g, p, t;
    cin >> g >> p >> t;

    int ind = g * p;
    int grp = g + t * p;

    if (ind == grp)
        cout << 0;
    else if (ind < grp)
        cout << 1;
    else
        cout << 2;
}