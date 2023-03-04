#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int b = 0, c = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 66) b++;
        else c++;
    }

    cout << b / 2 + c / 2;
}