#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int lis[n];
    int lds[n];
    lis[0] = 1;
    lds[0] = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1]) {
            lis[i] = lis[i - 1] + 1;
        } else {
            lis[i] = 1;
        }
    }
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[i - 1]) {
            lds[i] = lds[i - 1] + 1;
        } else {
            lds[i] = 1;
        }
    }

    sort(lis, lis + n);
    sort(lds, lds + n);

    cout << max(lis[n - 1], lds[n - 1]) << '\n';
}