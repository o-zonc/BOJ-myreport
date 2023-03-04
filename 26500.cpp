#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    while (n--) {
        double a, b;
        cin >> a >> b;

        cout << fixed;
        cout.precision(1);
        cout << abs(a - b) << '\n';
    }
}