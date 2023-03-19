#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int book[n];
    for (int i = 0; i < n; i++)
        cin >> book[i];

    int sum = 0, cnt = 1;
    for (int i = 0; i < n; i++) {
        sum += book[i];
        if (sum <= m) continue;
        else {
            cnt++;
            sum = 0;
            i--;
        }
    }

    cout << cnt;
}