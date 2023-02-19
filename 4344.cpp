#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int c;
    cin >> c;

    for (int i = 0; i < c; i++) {
        int n;
        cin >> n;

        int arr[n], sum = 0;
        double avg;
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            sum += arr[j];
        }

        sort(arr, arr + n);

        avg = (double)sum / (double)n;

        int low = 0, high = n;
        while (low < high) {
            int mid = (high + low) / 2;
            if (arr[mid] > avg) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        double percentile = (double)(n - high) / (double)n * 100;

        cout << fixed;
        cout.precision(3);
        cout << percentile << '%' << '\n';
    }
}