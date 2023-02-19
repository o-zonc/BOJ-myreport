#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    map<string, string> q;
    string a, b;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        q[a] = b;
    }

    for (int i = 0; i < m; i++) {
        cin >> a;

        cout << q[a] << '\n';
    }
}
