#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    int ans = (a == 1 || b == 1) ? a * b : (a + b) * 2 - 4;
    cout << ans;
}