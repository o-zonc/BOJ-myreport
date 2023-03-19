#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int cnt = 0, ans = 0;
    if (s.length() > 1) cnt++;

    for (int i = 0; i < s.length(); i++)
        ans += s[i] - '0';

    int t;
    while (true) {
        if (ans < 10) {
            cout << cnt << '\n';
            if (ans % 3 == 0) 
                cout << "YES";
             else 
                cout << "NO";
            
            break;
        }

        t = ans;
        ans = 0;
        while (t > 0) {
            ans += t % 10;
            t /= 10;
        }
        cnt++;
    }
}