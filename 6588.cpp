#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int prime[1000001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 2; i <= 1000001; i++) {
        if (prime[i] == 0) {
            for (int j = 2 * i; j <= 1000001; j += i) {
                prime[j] = 1;
            }
        }
    }

    while (true) {
        int n;
        cin >> n;

        if (n == 0) {
            break;
        }

        int end = n / 2;

        for (int i = 3; i <= end; i += 2) {
            if (!prime[n - i] && !prime[i]) {
                cout << n << " = " << i << " + " << n - i << '\n';
                break;
            }
        }
    }
}