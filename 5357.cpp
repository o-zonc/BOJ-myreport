#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        vector<char> v;

        for (int i = 0; i < s.length(); i++) {
            v.push_back(s[i]);
        }

        v.erase(unique(v.begin(), v.end()), v.end());

        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
        }
        cout << '\n';
    }
}