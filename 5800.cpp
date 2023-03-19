#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int m;
        vector<int> v;
        cin >> m;

        while (m--) {
            int scr;
            cin >> scr;
            v.push_back(scr);
        }

        sort(v.begin(), v.end(), greater<>());

        cout << "Class " << i << '\n';
        cout << "Max " << v.front() << ", Min " << v.back() << ", Largest gap ";

        int gap = 0;
        for (int i = 1; i < v.size(); i++) {
            gap = max(gap, v[i - 1] - v[i]);
        }

        cout << gap << '\n';
    }
}