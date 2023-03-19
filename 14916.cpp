#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i <= n / 5; i++) {
        if ((n - 5 * i) % 2 == 0) {
            ans = i + (n - 5 * i) / 2;
        }
    }

    cout << (ans ? ans : -1);
}