#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, v;
    cin >> a >> b >> v;

    int diff = a - b;
    int maybe = v - a;
    int some = ceil((double) maybe / (double) diff);

    int day = some + 1;

    cout << day;
}