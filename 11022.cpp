#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << '\n';
    }
}