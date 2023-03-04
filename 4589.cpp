#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    cout << "Gnomes:\n";
    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a < b && b < c) || (a > b && b > c)) {
            cout << "Ordered\n";
        } else {
            cout << "Unordered\n";
        }
    }
}