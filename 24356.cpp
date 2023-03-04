#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t1, m1, t2, m2;
    cin >> t1 >> m1 >> t2 >> m2;

    int min1 = t1 * 60 + m1, min2 = t2 * 60 + m2;
    
    int m;
    if (min1 <= min2)
        m = min2 - min1;
    else
        m = 1440 - min1 + min2;

    cout << m << ' ' << m / 30;
}