#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int ans;
    cin >> ans;

    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        int cmp;
        cin >> cmp;

        if (cmp == ans) cnt++;
    }

    cout << cnt;
}