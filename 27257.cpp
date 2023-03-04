#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int beauty = 0, i = s.length();
    while (i--) {
        if (s[i] != '0') break;
    }

    for (int j = 0; j <= i; j++) {
        if (s[j] == '0') beauty++;
    }

    cout << beauty;
}