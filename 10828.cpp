#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> stack;
    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int x;
            cin >> x;
            stack.push_back(x);
        }

        if (cmd == "pop") {
            if (!stack.empty()) {
                cout << stack.back() << '\n';
                stack.pop_back();
            } else {
                cout << "-1" << '\n';
            }
        }

        if (cmd == "size") {
            cout << stack.size() << '\n';
        }

        if (cmd == "empty") {
            if (!stack.empty())
                cout << "0" << '\n';
            else cout << "1" << '\n';
        }

        if (cmd == "top") {
            if (!stack.empty()) cout << stack.back() << '\n';
            else cout << "-1" << '\n';
        }
    }
}