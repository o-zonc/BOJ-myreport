#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    cout << fixed;
    cout.precision(10);
    cout << 100.0 / n << '\n'
         << 100.0 / (100 - n);
}