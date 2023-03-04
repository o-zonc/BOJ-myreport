#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c;
    cin >> a >> b >> c;

    int large = max(a, max(b, c));
    cout << 3 * large - a - b - c;
}