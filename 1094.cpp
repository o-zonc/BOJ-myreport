#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x;
    cin >> x;

    int sum = 0;
    for (int i = 0; i < 7; i++) {
        int temp = (x >> i) & 1;
        sum += temp;
    }

    cout << sum << '\n';
}