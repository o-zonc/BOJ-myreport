#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 500000

int prime[10005] = {1, 1,};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 2; i <= 100; i++) {
        for (int j = 2 * i; j <= 10000; j += i) {
            prime[j] = 1;
        }
    }

    int m, n;
    cin >> m >> n;

    int sml = MAX, sum = 0;
    for (int i = m; i <= n; i++) {
        if (prime[i] == 0) {
            sum += i;
            sml = min(i, sml);
        }
    }

    if (sum == 0) {
        cout << -1;
    } else {
        cout << sum << '\n' << sml;
    }
}