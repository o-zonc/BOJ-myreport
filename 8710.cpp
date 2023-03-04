#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int k, w, m;
    cin >> k >> w >> m;

    int cnt = 0;
    for (int i = k; i < w; i += m) {
        cnt++;
    }

    cout << cnt;
}