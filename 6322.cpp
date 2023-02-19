#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t = 1;
    while (1) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0) break;

        cout << "Triangle #" << t++ << '\n';

        cout << fixed;
        cout.precision(3);
        if (c == -1) {
            double x = sqrt(pow(a, 2) + pow(b, 2));
            cout << "c = " << x << '\n';
        } else {
            string sm;
            if (a == -1) sm = "a";
            else if (b == -1) sm = "b";
            
            int f = max(a, b);
            double x = pow(c, 2) - pow(f, 2);

            if (x <= 0) cout << "Impossible." << '\n';
            else cout << sm << " = " << sqrt(x) << '\n';
        }

        cout << '\n';
    }
}