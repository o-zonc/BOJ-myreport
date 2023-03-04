#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int a = 0, b = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 65) a++;
        else b++;
    }

    cout << a << " : " << b;
}