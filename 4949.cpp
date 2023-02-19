#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (true) {
        string line;
        getline(cin, line);

        if (line == ".") break;

        vector<char> balance;
        int flag = 0;

        int cnt = 0;
        for (int i = 0; i < line.length() - 1; i++) {
            if (line[i] == '(' || line[i] == ')' || line[i] == '[' || line[i] == ']') cnt++;
        }

        if (cnt == 0) {
            cout << "yes" << '\n';
            continue;
        }

        for (int i = 0; i < line.length() - 1; i++) {
            if (line[i] == '(') balance.push_back('(');
            if (line[i] == '[') balance.push_back('[');
            if (line[i] == ')') {
                if (!balance.empty() && balance.back() == '(')
                    balance.pop_back();
                else {
                    cout << "no" << '\n';
                    break;
                }
            }
            if (line[i] == ']') {
                if (!balance.empty() && balance.back() == '[')
                    balance.pop_back();
                else {
                    cout << "no" << '\n';
                    break;
                }
            }
            if (balance.empty() && i == line.length() - 2) {
                cout << "yes" << '\n';
                break;
            }
            if (!balance.empty() && i == line.length() - 2) {
                cout << "no" << '\n';
                break;
            }
        }
    }
}
