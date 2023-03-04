#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c;
    cin >> a >> b >> c;

    int avg = (a + b + c) / 3;

    int ans = (b >= avg) ? (c - avg) * 2 + (b - avg) : (avg - b) + (avg - a) * 2;

    cout << ans;
}