#include <algorithm>
#include <iostream>

using namespace std;

int scr[8], mmo[8], idx[5];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 0; i < 8; i++) {
        cin >> scr[i];
        mmo[i] = scr[i];
    }

    sort(scr, scr + 8, greater<>());

    int ans = 0;
    for (int i = 0; i < 5; i++) {
        ans += scr[i];
        idx[i] = find(mmo, mmo + 8, scr[i]) - mmo + 1;
    }

    sort(idx, idx + 5);

    cout << ans << '\n';
    for (int i = 0; i < 5; i++)
        cout << idx[i] << ' ';
}