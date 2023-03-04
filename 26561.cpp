#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    while (n--) {
        int p, t;
        cin >> p >> t;

        cout << p - t / 7 + t / 4 << '\n';
    }
}