#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    int arr[t];
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    vector<int> lis;
    lis.push_back(arr[0]);
    for (int i = 1; i < t; i++) {
        if (lis.back() < arr[i]) {
            lis.push_back(arr[i]);
        } else {
            int idx = lower_bound(lis.begin(), lis.end(), arr[i]) - lis.begin();
            lis[idx] = arr[i];
        }
    }

    cout << t - lis.size() << '\n';
}
