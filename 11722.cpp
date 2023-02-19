#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int arr[n], len[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 1;
    for (int i = 0; i < n; i++) {
        len[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[i]) len[i] = max(len[i], len[j] + 1);
        }
        sum = max(sum, len[i]);
    }

    cout << sum << '\n';
}