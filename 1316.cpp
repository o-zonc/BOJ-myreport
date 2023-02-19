#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool checker(string a) {
    int alpha[26] = {0};
    alpha[a[0] - 'a'] = 1;
    for (int i = 1; i < a.size(); i++) {
        if (alpha[a[i] - 'a'] == 0)
            alpha[a[i] - 'a'] = 1;
        else if (alpha[a[i] - 'a'] && a[i] != a[i - 1])
            return 0;
    }
    return 1;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    int cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        cnt += checker(s);
    }

    cout << cnt;
}