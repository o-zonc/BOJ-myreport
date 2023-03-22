#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string check;
    while (cin >> check) {
        string target;
        cin >> target;

        int i = 0;
        bool flag = 0;
        for (auto it : target) {
            if (it == check[i]) {
                i++;
                if (i == check.size()) flag = 1;
            }
        }

        if (flag)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}