#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        int a;
        cin >> a;

        if (a == t) cnt++;
    }

    cout << cnt;
}