#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    char col = (n - 1) % 8 + 'a';
    cout << col << (n + 7) / 8;
}