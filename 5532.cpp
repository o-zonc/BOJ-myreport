#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int l, a, b, c, d;

    cin >> l >> a >> b >> c >> d;

    int kor, mat;
    kor = (a % c) ? a / c + 1 : a / c;
    mat = (b % d) ? b / d + 1 : b / d;

    cout << l - max(kor, mat);
}