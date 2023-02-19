#include <iostream>

using namespace std;

int prime(int n) {
    if (n == 1) return 0;
    else if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19 || n == 23 || n == 29 || n == 31) {
        return 1;
    } else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0 && n % 11 != 0 && n % 13 != 0 && n % 17 != 0 && n % 19 != 0 && n % 23 != 0 && n % 29 != 0 && n % 31 != 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int cnt = 0;
    int j;
    for (int i = 0; i < n; i++) {
        cin >> j;
        if (prime(j)) cnt++;
    }

    cout << cnt;
}