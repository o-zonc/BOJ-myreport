#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int t, ck[26];
string msg, originMsg;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> t;
    while (t--) {
        memset(ck, 0, sizeof(ck));
        originMsg = "";

        cin >> msg;

        for (int i = 0; i < msg.size(); i++) {
            ck[msg[i] - 'A']++;
            originMsg += msg[i];
            if (ck[msg[i] - 'A'] == 3) {
                originMsg += msg[i];
                ck[msg[i] - 'A'] = 0;
                i++;
            }
        }

        if (originMsg == msg)
            cout << "OK\n";
        else
            cout << "FAKE\n";
    }
}