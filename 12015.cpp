#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> arr, lis;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int c;
    for (int i = 0; i < n; i++) {
        cin >> c;
        arr.push_back(c);
    }

    int cnt = 1;
    lis.push_back(arr[0]);
    for (int i = 1; i < n; i++) {
        if (lis.back() < arr[i]) {
            lis.push_back(arr[i]);
            cnt++;
        } else {
            int idx = lower_bound(lis.begin(), lis.end(), arr[i]) - lis.begin();
            lis[idx] = arr[i];
        }
    }

    cout << cnt;
}