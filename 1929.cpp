#include <iostream>

using namespace std;

int prime[1000002] = {1, 1,};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 2; i <= 1000; i++) {
        for (int j = 2 * i; j <= 1000000; j += i) {
            prime[j] = 1;
        }
    }

    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++) {
        if (prime[i] == 0) {
            cout << i << '\n';
        }
    }
}