#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s, zp = "";
    cin >> s;

    zp.push_back(s[0]);
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != zp.back()) zp.push_back(s[i]);
    }

    int c1 = 0, c0 = 0;
    for (int i = 0; i < zp.length(); i++) {
        if (zp[i] == '1') c1++;
        else c0++;
    }

    cout << min(c0, c1);
}