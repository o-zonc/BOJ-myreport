#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c;
    cin >> a >> b >> c;

    int ans = (a + b >= 2 * c) ? a + b - 2 * c : a + b;
    cout << ans;
}