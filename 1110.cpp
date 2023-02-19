#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int t = n;
    int cnt = 0;
    while (true) {
        if (t / 10 == 0) {
            t *= 11;
            cnt++;
            if (t == n)
                break;
            else
                continue;
        } else {
            t = (t % 10) * 10 + (t % 10 + t / 10) % 10;
            cnt++;
            if (t == n)
                break;
            else
                continue;
        }
    }

    cout << cnt;
}