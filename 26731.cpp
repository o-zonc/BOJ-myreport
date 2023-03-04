#include <iostream>

using namespace std;

#define A 325

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int s = 0;
    for (int i = 0; i < 25; i++) {
        char a;
        cin >> a;
        s += a - 65;
    }

    char ans = A - s + 65;
    cout << ans;
}