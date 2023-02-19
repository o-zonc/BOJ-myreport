#include <algorithm>
#include <iostream>

using namespace std;

int lis[2001], lds[2001], ans;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) lis[i] = max(lis[i], lis[j]);
            else lds[i] = max(lds[i], lds[j]);
        }
        lis[i] += 1;
        lds[i] += 1;
        ans = max(ans, lis[i] + lds[i] - 1);
    }

    cout << ans;
}