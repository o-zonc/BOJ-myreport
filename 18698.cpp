#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'D') {
                cout << i;
                break;
            }
            if (i == s.length() - 1) {
                cout << i + 1;
            }
        }

        cout << '\n';
    }
}