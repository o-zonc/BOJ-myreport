#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int dp[1001], sum;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        dp[i] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }
    }

    sort(dp, dp + n);

    cout << dp[n - 1];
}