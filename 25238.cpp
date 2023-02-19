#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    double bangmu = a * (100 - b) / 100.0;
    if (bangmu >= 100) {
        cout << 0;
    } else cout << 1;
}