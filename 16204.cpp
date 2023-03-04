#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m, k;
    cin >> n >> m >> k;

    if (m >= k) {
        cout << n - m + k;
    } else {
        cout << n + m - k;
    }
}