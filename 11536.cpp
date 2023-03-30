#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    string a[n], b[n], c[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
    }

    sort(b, b + n);
    sort(c, c + n, greater<>());
    bool dec = true, inc = true;
    for (int i = 0; i < n; i++) {
        if (c[i] != a[i]) dec = false;
        if (b[i] != a[i]) inc = false;
    }

    if (dec == inc) cout << "NEITHER";
    if (dec) cout << "DECREASING";
    if (inc) cout << "INCREASING";
}