#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n;

    vector<int> card;
    while (n--) {
        int x;
        cin >> x;
        card.push_back(x);
    }

    sort(card.begin(), card.end());

    cin >> m;

    while (m--) {
        int x;
        cin >> x;
        if (card[lower_bound(card.begin(), card.end(), x) - card.begin()] == x)
            cout << 1;
        else
            cout << 0;
        cout << ' ';
    }
}