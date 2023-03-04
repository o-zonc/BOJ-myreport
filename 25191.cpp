#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int chick, coke, beer;
    cin >> chick >> coke >> beer;

    int ans = (chick >= coke / 2 + beer) ? coke / 2 + beer : chick;
    cout << ans;
}