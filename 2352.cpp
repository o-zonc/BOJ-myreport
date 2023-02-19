#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> lis;
    lis.push_back(arr[0]);
    for (int i = 1; i < n; i++) {
        if (lis.back() < arr[i]) {
            lis.push_back(arr[i]);
        } else {
            int idx = lower_bound(lis.begin(), lis.end(), arr[i]) - lis.begin();
            lis[idx] = arr[i];
        }
    }

    cout << lis.size() << '\n';
}