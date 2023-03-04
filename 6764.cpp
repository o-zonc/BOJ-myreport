#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == b && b == c && c == d) {
        cout << "Fish At Constant Depth";
    } else if (a > b && b > c && c > d) {
        cout << "Fish Diving";
    } else if (a < b && b < c && c < d) {
        cout << "Fish Rising";
    } else {
        cout << "No Fish";
    }
}