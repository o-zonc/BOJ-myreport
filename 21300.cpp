#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int beer, malt, wine, soda, seltzer, water;
    cin >> beer >> malt >> wine >> soda >> seltzer >> water;

    int deposit = beer + malt + wine + soda + seltzer + water;
    deposit *= 5;
    cout << deposit;
}