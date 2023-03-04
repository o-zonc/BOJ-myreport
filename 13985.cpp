#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c;
    char p, e;
    cin >> a >> p >> b >> e >> c;

    if (a + b == c) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}