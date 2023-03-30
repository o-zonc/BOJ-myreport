#include <iostream>

using namespace std;

int p, d;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    while (n--) {
        char c;
        cin >> c;

        if (c == 'P')
            p++;
        else
            d++;

        if (abs(p - d) >= 2) break;
    }

    cout << p << ':' << d;
}