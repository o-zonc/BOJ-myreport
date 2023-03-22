#include <iostream>

using namespace std;

int n, m, j, cnt;

int main() {
    cin >> n >> m >> j;

    int start = 1, end = m;

    while (j--) {
        int x;
        cin >> x;

        bool flag = 1;
        while (flag)
            if (start <= x && x <= end) {
                flag = 0;
            } else if (start > x) {
                start--;
                end--;
                cnt++;
            } else {
                start++;
                end++;
                cnt++;
            }
    }

    cout << cnt;
}