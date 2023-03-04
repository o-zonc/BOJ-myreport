#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    while (true) {
        double x, y;
        cin >> x >> y;

        if (x == 0 || y == 0) {
            cout << "AXIS";
        } else if (x > 0 && y > 0) {
            cout << "Q1";
        } else if (x < 0 && y > 0) {
            cout << "Q2";
        } else if (x < 0 && y < 0) {
            cout << "Q3";
        } else {
            cout << "Q4";
        }

        if (x == 0 && y == 0) break;
        cout << '\n';
    }
}