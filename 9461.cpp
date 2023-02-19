#include <iostream>

using namespace std;

long long p[101];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    p[0] = 0;
    p[1] = p[2] = 1;
    for (int i = 3; i <= 100; i++) {
        p[i] = p[i - 2] + p[i - 3];
    }

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        cout << p[n] << '\n';
    }
}