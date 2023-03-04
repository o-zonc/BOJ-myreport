#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int arr[4], zs[2];

    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 2; i++) {
        cin >> zs[i];
    }

    sort(arr, arr + 4);
    sort(zs, zs + 2);

    cout << arr[1] + arr[2] + arr[3] + zs[1];
}