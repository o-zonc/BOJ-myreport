#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, n;
    cin >> a >> b >> n;

    int arr[n];
    int ans = abs(a - b);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        ans = min(ans, abs(arr[i] - b) + 1);
    }

    cout << ans;
}