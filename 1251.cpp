#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int sz = s.size();
    vector<string> ans;

    for (int i = 1; i < sz - 2; i++) {
        for (int j = 1; i + j < sz ; j++) {
            string s1 = s.substr(0, i);
            string s2 = s.substr(i, j);
            string s3 = s.substr(i + j);
            reverse(s1.begin(), s1.end());
            reverse(s2.begin(), s2.end());
            reverse(s3.begin(), s3.end());

            ans.push_back(s1 + s2 + s3);
        }
    }

    sort(ans.begin(), ans.end());
    cout << ans[0] << '\n';
}