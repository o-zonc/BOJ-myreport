#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (abs(x) % 2) {
            cout << x << " is odd\n";
        } else {
            cout << x << " is even\n";
        }
    }
}