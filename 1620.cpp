#include <algorithm>
#include <cctype>
#include <iostream>
#include <map>
#include <string>

using namespace std;

string poke[100001];

int main() {
    map<string, int> dex;
    int n;
    int m;
    int num;
    string name;

    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> poke[i];
        dex.insert(make_pair(poke[i], i + 1));
    }

    for (int i = 0; i < m; i++) {
        cin >> name;

        if (isdigit(name[0]) != 0) {
            num = stoi(name) - 1;
            cout << poke[num] << "\n";
        } else {
            auto index = dex.find(name);
            cout << index->second << "\n";
        }
    }
    return 0;
}