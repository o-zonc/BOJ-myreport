#include <iostream>
#include <map>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int arr[n], sum[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 0; i < n; i++) {
        sum[i] = arr[i];
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i] && sum[i] < sum[j] + arr[i]) sum[i] = sum[j] + arr[i];
        }
        if (max < sum[i]) max = sum[i];
    }

    cout << max << '\n';
}