#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int b, a;
        cin >> b >> a;

        for (int j = 0; j < a; j++) {
            for (int k = 0; k < b; k++) {
                cout << 'X';
            }
            cout << '\n';
        }
        cout << '\n';
    }
}