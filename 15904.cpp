#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    getline(cin, s);

    bool flag = 0, U = 0, C = 0, P = 0;
    for (auto it : s) {
        if (!(U * C * P) && it == 'U')
            U = 1;
        else if (U && !C && it == 'C')
            C = 1;
        else if (U && C && !P && it == 'P')
            P = 1;
        else if (U && C && P && it == 'C') {
            flag = 1;
            break;
        }
    }

    if (flag)
        cout << "I love UCPC";
    else
        cout << "I hate UCPC";
}