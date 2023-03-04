#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int m, d;
    cin >> m >> d;

    if (m == 1) {
        cout << "Before";
    } else if (m > 2) {
        cout << "After";
    } else {
        if (d < 18) {
            cout << "Before";
        } else if (d > 18) {
            cout << "After";
        } else {
            cout << "Special";
        }
    }
}