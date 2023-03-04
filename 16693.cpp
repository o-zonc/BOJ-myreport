#include <cmath>
#include <iostream>

using namespace std;

#define pi 3.1415926535l

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, p1, r, p2;
    cin >> a >> p1 >> r >> p2;

    long double da = (long double) a / p1;
    long double dr = pi * r * r / p2;

    if (da > dr) {
        cout << "Slice of pizza";
    } else {
        cout << "Whole pizza";
    }
}