#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s, c4;
    cin >> s >> c4;

    int slen = s.length();
    int c4len = c4.length();

    vector<char> v;
    for (int i = 0; i < slen; i++) {
        v.push_back(s[i]);

        if (v.back() == c4[c4len - 1]) {
            if (v.size() < c4len)
                continue;
            else {
                bool flag = true;
                for (int j = 0; j < c4len; j++) {
                    if (v[v.size() - c4len + j] != c4[j]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    for (int j = 0; j < c4len; j++) {
                        v.pop_back();
                    }
                }
            }
        }
    }

    if (v.empty()) cout << "FRULA";
    else {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
        }
    }
}