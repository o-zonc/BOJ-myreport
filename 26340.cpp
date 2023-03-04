#include <iostream>

using namespace std;

pair<int, int> origami(pair<int, int> sheet) {
    if (sheet.first > sheet.second)
        return make_pair(sheet.first / 2, sheet.second);
    else
        return make_pair(sheet.first, sheet.second / 2);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int a, b, p;
        cin >> a >> b >> p;

        cout << "Data set: " << a << ' ' << b << ' ' << p << '\n';

        pair<int, int> s;
        s = make_pair(a, b);
        while (p--) {
            s = origami(s);
        }

        int x = max(s.first, s.second), y = min(s.first, s.second);

        cout << x << ' ' << y << "\n\n";
    }
}