#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int b, p;
    cin >> b >> p;

    cout << min(b / 2, p);
}