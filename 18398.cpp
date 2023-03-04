#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        while (n--) {
            int a, b;
            cin >> a >> b;

            cout << a + b << ' ' << a * b << '\n';
        }
    }
}