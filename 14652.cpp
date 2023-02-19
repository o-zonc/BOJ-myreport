#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, k;
    cin >> n >> m >> k;

    cout << k / m << " " << k % m;
}