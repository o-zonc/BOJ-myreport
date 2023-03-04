#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    while (!cin.eof()) {
        string s;
        getline(cin, s);
        cout << s << '\n';
    }
}