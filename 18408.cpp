#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c;
    cin >> a >> b >> c;

    if (a + b + c <= 4)
        cout << 1;
    else
        cout << 2;
}