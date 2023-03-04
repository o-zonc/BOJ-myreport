#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b, c;
        string id;
        cin >> id >> a >> b >> c;

        int sum = a + b + c;
        if (sum >= 55 && a >= 35 * 0.3 && b >= 25 * 0.3 && c >= 40 * 0.3) {
            cout << id << ' ' << sum << " PASS\n";
        } else {
            cout << id << ' ' << sum << " FAIL\n";
        }
    }
}