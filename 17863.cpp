#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    if (n / 10000 == 555) {
        cout << "YES";

    } else {
        cout << "NO";
    }
}