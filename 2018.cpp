#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, i, cnt = 0, sum = 0;
    cin >> n;

    for (i = 1; sum <= n; i++) {
        sum += i;
        if ((n - sum) >= 0 && (n - sum) % i == 0) cnt++;
    }

    cout << cnt;
}