#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << ' ';
        if (i % 6 == 0) cout << "Go! ";
    }
    if (n % 6 != 0) cout << "Go!";
}