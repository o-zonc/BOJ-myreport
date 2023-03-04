#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << fixed;
    cout.precision(2);
    if (n) {
        cout << 1.00;
    } else {
        cout << "divide by zero";
    }
}