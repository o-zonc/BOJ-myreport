#include <iostream>

using namespace std;

int main() {
    int r, s;
    cin >> r >> s;

    int cupcake = r * 8 + s * 3;

    int leftover = (cupcake >= 28) ? cupcake - 28 : 0;
    cout << leftover;
}