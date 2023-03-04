#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, w;
    cin >> n >> w;

    if (n + 7 * w > 30)
        cout << 0;
    else
        cout << 1;
}