#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr + 3);
    cout << arr[1];
}