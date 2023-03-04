#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    char buf;
    int a, b, c;

    cin >> a >> buf >> b >> buf >> c;

    if (a + b == c)
        cout << "YES";
    else
        cout << "NO";
}