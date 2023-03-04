#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    cin.ignore();

    for (int i = 1; i <= t; i++) {
        string s;
        getline(cin, s);
        cout << i << ". " << s << '\n';
    }
}