#include <iostream>

using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll r, c, n;
    cin >> r >> c >> n;

    ll row, col;
    row = (r % n) ? r / n + 1 : r / n;
    col = (c % n) ? c / n + 1 : c / n;

    cout << row * col;
}