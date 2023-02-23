#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }

    cout << s;
}