#include <iostream>
#include <string>

using namespace std;

int gcd(int x, int y) {
    return y ? gcd(y, x % y) : x;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s, t;
    cin >> s >> t;

    string a = s, b = t;
    int g = gcd(s.size(), t.size());
    int an = t.size() / g , bn = s.size() / g;
    for (int i = 0; i < an - 1; i++) {
        for (int j = 0; j < s.size(); j++) {
            a.push_back(s[j]);
        }
    }
    for (int i = 0; i < bn - 1; i++) {
        for (int j = 0; j < t.size(); j++) {
            b.push_back(t[j]);
        }
    }

    if (a == b)
        cout << 1;
    else
        cout << 0;
}