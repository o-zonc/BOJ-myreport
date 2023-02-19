#include <iostream>

using namespace std;

int idle(int n) {
    int ans = 0;

    if (n <= 99) ans = 1;
    else if (n <= 999) {
        int th = n / 100;
        int hd = (n / 10) % 10;
        int on = n % 10;
        if (th - hd == hd - on) ans = 1;
    }

    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cnt += idle(i);
    }

    cout << cnt;
}