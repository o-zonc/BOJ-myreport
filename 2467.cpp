#include <algorithm>
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

    sort(arr, arr + n);

    int start = 0, end = n - 1, ans[2] = {0, 0}, mval = 2000000000;
    while (start < end) {
        int val = arr[start] + arr[end];

        if (abs(val) <= mval) {
            mval = abs(val);
            ans[0] = arr[start];
            ans[1] = arr[end];

            if (val == 0) {
                break;
            }
        }

        if (val < 0) {
            start++;
        } else {
            end--;
        }
    }

    cout << ans[0] << ' ' << ans[1];
}