#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << a << ' ' << b << ' ' << c << '\n';

        if (a >= 10 && b >= 10 && c >= 10)
            cout << "triple-double\n";
        else if (a < 10 && b < 10 && c < 10)
            cout << "zilch\n";
        else if ((a >= 10 && b >= 10) || (b >= 10 && c >= 10) || (c >= 10 && a >= 10))
            cout << "double-double\n";
        else
            cout << "double\n";

        cout << '\n';
    }
}