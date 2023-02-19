#include <iostream>

using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll s;
    ll i;
    cin >> s;

    for (i = 1; i * (i + 1) <= 2 * s; i++)
        ;

    if (i > 1)
        cout << i - 1;
    else
        cout << 1;
}