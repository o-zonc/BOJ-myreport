#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int s, t, d;
    cin >> s >> t >> d;

    cout << (d / (2 * s)) * t;
}