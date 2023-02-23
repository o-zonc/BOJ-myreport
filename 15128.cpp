#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    long long p1, p2, q1, q2;
    cin >> p1 >> q1 >> p2 >> q2;

    int ans = ((p1 * p2) % (2 * q1 * q2) == 0) ? 1 : 0;
    cout << ans;
}