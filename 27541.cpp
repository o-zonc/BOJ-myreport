#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    if (s[n - 1] == 'G') {
        s.erase(n - 1);
        cout << s;
    } else {
        s.append("G");
        cout << s;
    }
}