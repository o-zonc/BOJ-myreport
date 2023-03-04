#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            cnt++;
        }
    }

    cout << cnt;
}