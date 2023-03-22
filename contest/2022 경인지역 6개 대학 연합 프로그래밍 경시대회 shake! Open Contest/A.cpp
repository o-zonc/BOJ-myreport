#include <cmath>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m, k;
    cin >> n >> m >> k;

    int mx = log2(n);
    int ans = log2(k);

    cout << (ans + m >= mx ? mx : ans + m);
}