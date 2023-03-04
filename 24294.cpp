#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    cout << max(w1, w2) * 2 + (h1 + h2) * 2 + 4;
}