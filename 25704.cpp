#include <iostream>

using namespace std;

int minp(int a, int b = 100000, int c = 100000, int d = 100000) {
    int ans = min(a - 500, min(9 * b / 10, min(c - 2000, 3 * d / 4)));
    return (ans < 0) ? 0 : ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, p;
    cin >> n >> p;

    int ans;
    if (n >= 20)
        ans = minp(p, p, p, p);
    else if (n >= 15)
        ans = minp(p, p, p);
    else if (n >= 10)
        ans = minp(p, p);
    else if (n >= 5)
        ans = minp(p);
    else
        ans = p;
        
    cout << ans;
}