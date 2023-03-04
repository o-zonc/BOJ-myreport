#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int s, k, h;
    cin >> s >> k >> h;

    if (s + k + h >= 100) {
        cout << "OK";
    } else {
        int mini = min(s, min(k, h));
        if (mini == s) {
            cout << "Soongsil";
        } else if (mini == k) {
            cout << "Korea";
        } else {
            cout << "Hanyang";
        }
    }
}