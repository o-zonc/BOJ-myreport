#include <iostream>

using namespace std;

#define ll long long

ll poly[10000][2];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> poly[i][0] >> poly[i][1];
    }

    ll a = poly[n - 1][0] * poly[0][1];
    ll b = poly[n - 1][1] * poly[0][0];

    for (int i = 0; i < n - 1; i++) {
        a += poly[i][0] * poly[i + 1][1];
        b += poly[i][1] * poly[i + 1][0];
    }

    ll s2 = a - b;

    cout << fixed;
    cout.precision(1);
    cout << abs(s2 / 2.0l);
}