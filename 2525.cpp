#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, m, c;
    cin >> h >> m >> c;

    int totm = m + c;
    h += totm / 60;
    m = totm % 60;
    
    h %= 24;
    cout << h << ' ' << m;
}