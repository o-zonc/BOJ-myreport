#include <iostream>
using namespace std;

int n, ans = 666, cnt, temp;

int main() {
    cin >> n;

    while (cnt != n) {
        temp = ans;
        ans++;

        while (temp != 0) {
            if (temp % 1000 == 666) {
                cnt++;
                break;
            } else
                temp /= 10;
        }
    }

    cout << ans - 1;
}