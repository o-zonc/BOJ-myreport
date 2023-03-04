#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int rt, rd;
    cin >> rt >> rd;

    int n;
    cin >> n;

    while (n--) {
        int us;
        cin >> us;

        int bill = (us > 1000) ? 1000 * rt + (us - 1000) * rd : us * rt;
        cout << us << ' ' << bill << '\n';
    }
}