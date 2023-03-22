#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, l;
    cin >> n >> l;

    vector<int> v;
    while (n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (auto it : v) {
        if (it <= l) l++;
        if (it > l) break;
    }

    cout << l;
}