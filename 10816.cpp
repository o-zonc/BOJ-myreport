#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int card[n];
    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }

    int m;
    cin >> m;

    int sg[m];
    for (int i = 0; i < m; i++) {
        cin >> sg[i];
    }

    sort(card, card + n);

    for (int i = 0; i < m; i++) {
        int cnt = upper_bound(card, card + n, sg[i]) - lower_bound(card, card + n, sg[i]);
        cout << cnt << ' ';
    }
}