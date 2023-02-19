#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    while (true) {
        string s;
        getline(cin, s);

        if (s == "#") break;
        
        int length = s.length();
        for (int i = 0; i < length; i++) {
            if ('A' <= s[i] && s[i] <= 'Z') {
                s[i] |= 32;
            }
        }

        int cnt = 0;
        for (int i = 0; i < length; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
}