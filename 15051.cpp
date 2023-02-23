#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c;
    cin >> a >> b >> c;

    int ans = min(b * 2 + c * 4, min(a * 2 + c * 2, a * 4 + b * 2));
    cout << ans;
}