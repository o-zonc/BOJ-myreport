#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    while (true) {
        int m, f;
        cin >> m >> f;

        if (m == 0 && f == 0) break;

        cout << m + f << '\n';
    }
}