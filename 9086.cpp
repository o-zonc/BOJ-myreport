#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;
    string line;

    for (int i = 0; i < n; i++) {
        cin >> line;
        cout << line[0] << line[size(line) - 1] << '\n';
    }
}