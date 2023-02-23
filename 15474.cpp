#include <iostream>

using namespace std;

inline int divide(int n, int b) {
    return (n % b == 0) ? n / b : n / b + 1;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    int ans = min(divide(n, a) * b, divide(n, c) * d);
    cout << ans;
}