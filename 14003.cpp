#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<long long> arr, lis;

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

    int idxv[n];
    lis.push_back(arr[0]);
    idxv[0] = 0;
    int idx;
    for (int i = 1; i < n; i++) {
        if (lis.back() < arr[i]) {
            lis.push_back(arr[i]);
            idxv[i] = lis.size() - 1;
        } else {
            idx = lower_bound(lis.begin(), lis.end(), arr[i]) - lis.begin();
            lis[idx] = arr[i];
            idxv[i] = idx;
        }
    }

    vector<long long> ans;
    cout << lis.size() << '\n';
    int maxidx = lis.size() - 1;
    for (int i = n - 1; i >= 0; i--) {
        if (idxv[i] == maxidx) {
            ans.push_back(arr[i]);
            maxidx--;
        }
    }

    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << ' ';
    }
}