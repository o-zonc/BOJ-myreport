#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    int large = (a + b > a - b) ? a + b : a - b;
    int small = (a + b > a - b) ? a - b : a + b;
    cout << large << '\n'
         << small;
}