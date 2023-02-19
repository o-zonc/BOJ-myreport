#include <iostream>

using namespace std;

int rcp;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int x, n;
    cin >> x >> n;

    int cost, cnt;
    for (int i = 0; i < n; i++) {
        cin >> cost >> cnt;
        rcp += cost * cnt;
    }

    if (x == rcp) cout << "Yes";
    else cout << "No";
}