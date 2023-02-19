#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[1000006];

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        v.push_back(arr[i]);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i = 0; i < n; i++) {
        int idx = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
        cout << idx << ' ';
    }
}