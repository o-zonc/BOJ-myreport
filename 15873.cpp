#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;


    int ans;
    if (n % 10 == 0) {
        ans = n / 100 + 10;
    } else {
        ans = n / 10 + n % 10;
    }

    cout << ans;
}