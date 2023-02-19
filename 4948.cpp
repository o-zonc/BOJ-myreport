#include <iostream>

using namespace std;

int prime[246913] = {
    1,
    1,
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 2; i <= 497; i++) {
        for (int j = 2 * i; j <= 246912; j += i) {
            prime[j] = 1;
        }
    }

    while (true) {
        int n;
        cin >> n;

        if (!n) break;

        int cnt = 0;
        for (int i = n + 1; i <= 2 * n; i++) {
            if (!prime[i]) cnt++;
        }

        cout << cnt << '\n';
    }
}