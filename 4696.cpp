#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout << fixed;
    cout.precision(2);

    while (true) {
        double in;
        cin >> in;

        if (in == 0) break;

        double ans = (in == 1) ? 5.0 : (pow(in, 5) - 1) / (in - 1);
        cout << ans << '\n';
    }
}