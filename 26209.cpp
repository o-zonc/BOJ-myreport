#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> s;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    for (int i = 0; i < 8; i++) {
        int a;
        cin >> a;
        s.push_back(a);
    }

    if (find(s.begin(), s.end(), 9) == s.end()) cout << "S";
    else cout << "F";
}