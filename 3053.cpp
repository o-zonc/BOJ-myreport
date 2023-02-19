#include <iostream>
#include <cmath>

using namespace std;
const double pi = 3.14159265358979;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    cout << fixed;
    cout.precision(6);

    double eucl = pow(n, 2) * pi;
    double taxi = pow(n, 2) * 2;
    cout << eucl << '\n' << taxi << '\n';
}