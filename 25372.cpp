#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (6 <= s.length() && s.length() <= 9) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
}