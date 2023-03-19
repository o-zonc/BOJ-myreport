#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int n;
vector<string> s;
map<string, int> m;

int main() {
    cin >> n;
    while (n--) {
        string name, stat;
        cin >> name >> stat;
        if (stat == "leave")
            m[name] = 0;
        else
            m[name] = 1;
    }

    for (auto it : m) {
        if (it.second) s.push_back(it.first);
    }

    sort(s.rbegin(), s.rend());
    for (auto it : s) cout << it << '\n';
}