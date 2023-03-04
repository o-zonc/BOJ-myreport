#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    if (n > 7)
        cout << n - 7;
    else
        cout << m + 7;
}