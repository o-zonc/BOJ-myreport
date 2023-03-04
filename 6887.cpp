#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int i = sqrt(n);
    cout << "The largest square has side length " << i << '.';
}