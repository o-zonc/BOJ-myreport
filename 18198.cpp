#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int l = s.length();
    int alice = 0;
    int barbara = 0;

    for (int i = 0; i < l; i += 2) {
        if (s[i] == 'A') {
            alice += s[i + 1] - '0';
        } else {
            barbara += s[i + 1] - '0';
        }
    }

    if (alice > barbara)
        cout << 'A';
    else
        cout << 'B';
}