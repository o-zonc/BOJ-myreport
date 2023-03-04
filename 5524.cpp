#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        for (int j = 0; j < s.length(); j++) {
            s[j] = tolower(s[j]);
        }

        cout << s << '\n';
    }
}