#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int w, l, h;
    cin >> w >> l >> h;

    if ((double)min(w, l) / h >= 2 && (double)max(w, l) / min(w, l) <= 2)
        cout << "good";
    else
        cout << "bad";
}