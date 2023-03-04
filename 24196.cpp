#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    for (int i = 0; i < s.length();) {
        cout << s[i];
        i += s[i] - 64;
    }
}