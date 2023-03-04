#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        string s;
        cin >> s >> a >> b;

        for (int i = 0; i < a; i++) {
            cout << s[i];
        }
        for (int i = b; i < s.length(); i++) {
            cout << s[i];
        }

        cout << '\n';
    }
}