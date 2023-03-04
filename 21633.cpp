#include <iostream>

using namespace std;

inline double com(int m) {
    return (m * 0.01 + 25 > 2000) ? 2000.0 : (m * 0.01 + 25 < 100) ? 100 : m * 0.01 + 25;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    cout << fixed;
    cout.precision(2);
    cout << com(n);
}