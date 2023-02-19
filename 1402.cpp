#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;

        if (a == 0 || b == 0) 
        cout << "no" << '\n';
        else cout << "yes" << '\n';
    }
}