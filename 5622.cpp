#include <iostream>
#include <string>

using namespace std;

int alphatoint(char c) {
    if ('A' <= c && c <= 'C') return 3;
    if ('D' <= c && c <= 'F') return 4;
    if ('G' <= c && c <= 'I') return 5;
    if ('J' <= c && c <= 'L') return 6;
    if ('M' <= c && c <= 'O') return 7;
    if ('P' <= c && c <= 'S') return 8;
    if ('T' <= c && c <= 'V') return 9;
    if ('W' <= c && c <= 'Z') return 10;
    return 0;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum += alphatoint(s[i]);
    }

    cout << sum;
}