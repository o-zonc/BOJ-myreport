#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    map<string, int> nolinose;
    vector<string> v;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n + m; i++) {
        string name;
        cin >> name;
        nolinose[name]++;
        if (nolinose[name] > 1) {
            v.push_back(name);
        }
    }

    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << '\n';
    }
    return 0;
}
