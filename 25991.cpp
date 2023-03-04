#include <cmath>
#include <iostream>

using namespace std;

#define ld long double

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    ld t = 0;
    while (n--) {
        ld c;
        cin >> c;

        t += pow(c, 3);
    }

    cout << fixed;
    cout.precision(10);
    cout << cbrtl(t);
}
