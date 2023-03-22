#include <iostream>

using namespace std;

int x[30001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = n; i >= 0; i--) {
        int arr[3] = {n, i, 0}, mx = 2;
        while (true) {
            arr[2] = arr[0] - arr[1];
            if (arr[2] < 0) {
                x[i] = mx;
                break;
            }
            mx++;
            arr[0] = arr[1], arr[1] = arr[2];
        }
    }

    int mx = 0, midx = 0;
    for (int i = 1; i <= n; i++)
        if (x[i] > mx) {
            mx = x[i];
            midx = i;
        }

    cout << x[midx] << '\n';

    int arr[3] = {n, midx, 0};
    while (true) {
        cout << arr[0] << ' ';
        arr[2] = arr[0] - arr[1];
        if (arr[2] < 0) break;
        arr[0] = arr[1], arr[1] = arr[2];
    }
    cout << arr[1];
}