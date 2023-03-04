#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    while (n--) {
        int i, f;
        cin >> i >> f;

        if ((i <= 2 && f <= 1) || (i <= 1 && f <= 2)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}