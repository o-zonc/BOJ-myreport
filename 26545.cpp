#include <iostream>

using namespace std;

int sum;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        sum += j;
    }

    cout << sum;
}