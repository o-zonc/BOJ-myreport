#include <iostream>
#include <string>

using namespace std;

int a[200001], n, s, up, now;
string res = "";

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> s;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    string com;
    cin >> com;

    for (int i = com.length() - 1; i >= 0; i--) {
        cout << com[i];
    }
}