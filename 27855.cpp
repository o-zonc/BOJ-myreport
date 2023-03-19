#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int p1 = 3 * a + b, p2 = 3 * c + d;
    if (p1 > p2) {
        cout << "1 " << p1 - p2;
    } else if (p1 < p2) {
        cout << "2 " << p2 - p1;
    } else {
        cout << "NO SCORE";
    }
}