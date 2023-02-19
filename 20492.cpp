#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;
    int one, two;
    one = n * 0.78;
    two = n * 0.8 + n * 0.2 * 0.78;
    cout << one << " " << two;
}