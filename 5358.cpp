#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    while (!cin.eof()) {
        string s;
        getline(cin, s);

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'i') {
                s[i] = '(';
            } else if (s[i] == 'I') {
                s[i] = ')';
            } else if (s[i] == 'e') {
                s[i] = '[';
            } else if (s[i] == 'E') {
                s[i] = ']';
            }
        }

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                s[i] = 'e';
            } else if (s[i] == ')') {
                s[i] = 'E';
            } else if (s[i] == '[') {
                s[i] = 'i';
            } else if (s[i] == ']') {
                s[i] = 'I';
            }
        }

        cout << s << '\n';
    }
}