#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x;
    double n1, n2, n12;
    cin >> n1 >> n2 >> n12;

    x = floor((n1 + 1) * (n2 + 1) / (n12 + 1) - 1);
    cout << x;
}