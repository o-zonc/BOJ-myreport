#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        double a, b, c;
        cin >> a >> b >> c;
        cout << fixed;
        cout.precision(2);
        cout << "$" << a * b * c << '\n';
    }
}