#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, c, ans;
    cin >> a >> b >> c;

    a--, b--, c--;
    for (int i = 1; i <= 7980; i++) {
        if (i % 15 == a && i % 28 == b && i % 19 == c) {
            ans = (i + 1) % 7980;
            break;
        }
    }

    cout << (ans ? ans : 7980);
}