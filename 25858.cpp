#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, d;
    cin >> n >> d;

    int tot = 0, arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        tot += arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] * d / tot << '\n';
    }
}