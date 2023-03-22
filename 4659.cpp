#include <iostream>
#include <string>

using namespace std;

bool m, check, flag, con;
int cnt;
string s;
char pre, v[5] = {'a', 'e', 'i', 'o', 'u'};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    while (true) {
        m = false;
        flag = false;
        check = false;
        cnt = 0;

        cin >> s;

        if (s == "end")
            break;

        for (int i = 0; i < s.length(); ++i) {
            con = false;
            if (i != 0) {
                if (s[i] == s[i - 1] && s[i] != 'e' && s[i] != 'o') {
                    flag = true;
                    break;
                }
            }

            for (int j = 0; j < 5; ++j) {
                if (s[i] == v[j]) {
                    if (check == false) {
                        cnt = 0;
                    }
                    m = true;
                    check = true;
                    con = true;
                    ++cnt;
                }
            }

            if (!con) {
                if (check == true) {
                    cnt = 0;
                }
                check = false;
                ++cnt;
            }

            if (cnt == 3) {
                flag = true;
                break;
            }

            if (flag) {
                break;
            }
        }
        if (!m) {
            flag = true;
        }

        if (flag) {
            cout << "<" << s << "> is not acceptable." << '\n';
        } else {
            cout << "<" << s << "> is acceptable." << '\n';
        }
    }
}