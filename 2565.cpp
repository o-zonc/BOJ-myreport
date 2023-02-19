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

    map<int, int> elec;
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        elec.insert(make_pair(a, b));
    }

    int arr[t];
    int k = 0;
    for (auto it : elec) {
        arr[k++] = it.second;
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
