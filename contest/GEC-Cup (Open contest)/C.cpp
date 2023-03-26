#include <iostream>
#include <string>

using namespace std;

/*  NLCS: northlondo
    BHA:  branksomeh
    KIS:  koreainter
    SJA:  stjohnsbur  */

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    string k[4] = {"northlondo", "branksomeh", "koreainter", "stjohnsbur"}, va[4] = {"NLCS", "BHA", "KIS", "SJA"};

    bool flag = false;
    while (true) {
        for (int i = 0; i < 10; i++) {
            s[i] = (s[i] + 1 - 97) % 26 + 'a';
        }
        for (int i = 0; i < 4; i++) {
            if (s == k[i]) {
                cout << va[i];
                flag = true;
            }
        }
        if (flag) break;
    }
}