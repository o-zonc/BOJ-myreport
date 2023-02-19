#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        string a, b;
        map<string, int> sets;
        for (int j = 0; j < n; j++) {
            cin >> a >> b;
            if (sets.find(b) == sets.end())
                sets.insert(make_pair(b, 1));
            else
                sets[b]++;
        }

        int ans = 1;
        for (auto it : sets) {
            ans *= (it.second + 1);
        }
        ans -= 1;
        cout << ans << '\n';
    }
}