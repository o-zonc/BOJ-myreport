#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> queue;
    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int x;
            cin >> x;
            queue.push_back(x);
        }

        if (cmd == "pop") {
            if (!queue.empty()) {
                cout << queue.front() << '\n';
                queue.erase(queue.begin());
            } else cout << "-1" << '\n';
        }

        if (cmd == "size") {
            cout << queue.size() << '\n';
        }

        if (cmd == "empty") {
            cout << queue.empty() << '\n';
        }

        if (cmd == "front") {
            if (!queue.empty())
                cout << queue.front() << '\n';
            else
                cout << "-1" << '\n';
        }

        if (cmd == "back") {
            if (!queue.empty())
                cout << queue.back() << '\n';
            else
                cout << "-1" << '\n';
        }
    }
}