#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    cout << (n * (n + 1) / 2) * (n * (n + 1) / 2);
}