#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        long long a, b;
        cin >> a >> b;

        cout << a + b << '\n';
    }
}