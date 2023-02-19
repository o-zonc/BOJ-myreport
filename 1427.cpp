#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    vector<char> n;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        n.push_back(s[i]);
    }
    
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (n[j] == '0') {
                char temp = n[j + 1];
                n[j + 1] = n[j];
                n[j] = temp;
            } else if (n[j] < n[j + 1]) {
                char temp = n[j + 1];
                n[j + 1] = n[j];
                n[j] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        cout << n[i];
    }
}