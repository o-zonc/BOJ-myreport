#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int cnt = 0;
    while (n--) {
        string s;
        cin >> s;

        if (s.length() > 4)
            continue;
        else if (s.length() < 4)
            cnt++;
        else if (s[2] < '9')
            cnt++;
        else if (s[2] == '9' && s[3] == '0')
            cnt++;
    }

    cout << cnt;
}