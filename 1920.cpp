#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int l;
    for (int i = 0; i < n; i++) {
        cin >> l;
        arr.push_back(l);
    }

    sort(arr.begin(), arr.end());

    int m;
    cin >> m;
    for (int j = 0; j < m; j++) {
        int k;
        cin >> k;
        int cnt = upper_bound(arr.begin(),arr.end(), k) - lower_bound(arr.begin(), arr.end(), k);
        if (cnt) {
            cout << 1 << '\n';
        } else
            cout << 0 << '\n';
    }
}