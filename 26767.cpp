#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0 && i % 11 == 0)
            cout << "Wiwat!\n";
        else if (i % 7 == 0)
            cout << "Hurra!\n";
        else if (i % 11 == 0)
            cout << "Super!\n";
        else {
            cout << i << '\n';
        }
    }
}