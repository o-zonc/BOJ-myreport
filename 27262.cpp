#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, k, a, b;
    cin >> n >> k >> a >> b;

    cout << (k + n - 2) * b << ' ' << (n - 1) * a;
}