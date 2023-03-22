#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    int i;
    cin >> s >> i;

    cout << s[i - 1];
}