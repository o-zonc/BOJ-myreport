#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

pair<int, int> p[5001];
vector<int> lis;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        p[i].first = arr[i];
    }
    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == p[j].first) {
                p[j].second = i / k + 1;
            }
        }
    }

    lis.push_back(p[0].second);
    for (int i = 1; i < n; i++) {
        if (lis.back() <= p[i].second) {
            lis.push_back(p[i].second);
        } else {
            int idx = upper_bound(lis.begin(), lis.end(), p[i].second) - lis.begin();
            lis[idx] = p[i].second;
        }
    }

    cout << n - lis.size() << '\n';
}