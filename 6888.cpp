#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int x, y;
    cin >> x >> y;

    int k = 0;
    for (int i = x; i <= y; i++) {
        if (k++ % 60 == 0) {
            cout << "All positions change in year " << i << '\n';
        }
    }
}