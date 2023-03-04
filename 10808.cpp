#include <iostream>
#include <string>

using namespace std;

int alpha[26];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int len = s.length();

    for (int i = 0; i < len; i++) {
        alpha[s[i] - 97]++;
    }

    for (int i = 0; i < 26; i++) {
        cout << alpha[i] << ' ';
    }
}