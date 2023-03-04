#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    if (60 + k > n) {
        cout << 1500 * n;
    } else {
        cout << (2 * n - 60 - k) * 1500;
    }
}