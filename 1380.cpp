#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t = 1;

    while (true) {
        int n;
        cin >> n;

        if (n == 0) break;

        vector<string> name;
        int earring[n];
        cin.ignore();
        for (int i = 0; i < n; i++) {
            string s;
            getline(cin, s);
            name.push_back(s);
            earring[i] = 2;
        }

        int a;
        char buf;
        for (int i = 0; i < 2 * n - 1; i++) {
            cin >> a >> buf;
            earring[a - 1]--;
        }

        for (int i = 0; i < n; i++) {
            if (earring[i] == 1) {
                cout << t++ << ' ' << name[i] << '\n';
                break;
            }
        }
    }
}