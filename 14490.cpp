#include <iostream>
#include <string>

using namespace std;

int n[2];

int gcd(int x, int y) {
    return y ? gcd(y, x % y) : x;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int idx = 0;
    for (auto it : s) {
        if (it == ':') {
            idx = 1;
            continue;
        }
        n[idx] *= 10;
        n[idx] += it - '0';
    }

    int g = gcd(n[0], n[1]);
    cout << n[0] / g << ':' << n[1] / g;
}