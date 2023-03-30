#include <iostream>
#include <string>

using namespace std;

int u, d, p;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'U' || s[i] == 'C') u++;
        if (s[i] == 'D') d++;
        if (s[i] == 'P') p++;
    }

    if (2 * u > d + p + 1)
        cout << "U";
    if (d + p)
        cout << "DP";
    if (!(2 * u > d + p + 1) && !(d + p))
        cout << "C";
}