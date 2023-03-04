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

        cout << "Denominations: ";

        int s;
        cin >> s;
        cout << s << ' ';

        bool flag = true;
        for (int i = 1; i < n; i++) {
            int a;
            cin >> a;

            cout << a << ' ';

            if (a < 2 * s) flag = false;

            s = a;
        }

        if (flag)
            cout << "\nGood coin denominations!\n\n";
        else
            cout << "\nBad coin denominations!\n\n";
    }
}