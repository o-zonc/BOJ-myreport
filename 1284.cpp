#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    while (true) {
        string s;
        cin >> s;

        if (s == "0") break;

        int ln = 1;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1')
                ln += 3;
            else if (s[i] == '0')
                ln += 5;
            else
                ln += 4;
        }

        cout << ln << '\n';
    }
}