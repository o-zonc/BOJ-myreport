#include <iostream>

using namespace std;

#define ll long long

ll c(int n, int r) {
    if (n < r) return 0;
    if (n == r || r == 0) return 1;

    return c(n - 1, r - 1) + c(n - 1, r);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    cout << c(n, 4);
}