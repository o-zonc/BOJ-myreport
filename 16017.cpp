#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a == 8 || a == 9) && (d == 8 || d == 9) && (b == c)) {
        cout << "ignore";

    } else {
        cout << "answer";
    }
}