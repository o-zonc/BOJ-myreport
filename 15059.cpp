#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int c, b, p;
    cin >> c >> b >> p;

    int x, y, z;
    cin >> x >> y >> z;

    int chicken = (x > c) ? x - c : 0;
    int beef = (y > b) ? y - b : 0;
    int pasta = (z > p) ? z - p : 0;

    cout << chicken + beef + pasta;
}