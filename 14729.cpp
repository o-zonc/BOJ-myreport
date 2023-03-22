#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    double arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    cout << fixed;
    cout.precision(3);
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << '\n';
    }
}