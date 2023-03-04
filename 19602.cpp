#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int s, m, l;
    cin >> s >> m >> l;

    if (s + 2 * m + 3 * l >= 10)
        cout << "happy";
    else
        cout << "sad";
}