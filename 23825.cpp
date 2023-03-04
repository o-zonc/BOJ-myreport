#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    cout << min(a / 2, b / 2);
}