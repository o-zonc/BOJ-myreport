#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        double s, b;
        cin >> s >> b;

        cout << fixed;
        cout.precision(2);
        cout << "The height of the triangle is " << 2 * s / b << " units\n";
    }
}