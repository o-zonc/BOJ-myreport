#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string info, trans;
        cin >> info >> trans;

        int len = info.length();

        bool flag = true;
        for (int i = 0; i < len; i++) {
            if (info[i] != trans[i]) {
                cout << "ERROR\n";
                flag = false;
                break;
            }
        }

        if (flag) cout << "OK\n";
    }
}