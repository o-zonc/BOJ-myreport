#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t1, v1, t2, v2;
    cin >> t1 >> v1 >> t2 >> v2;

    if (t2 < 0 && v2 >= 10)
        cout << "A storm warning for tomorrow! Be careful and stay home if possible!\n";
    else if (t1 > t2)
        cout << "MCHS warns! Low temperature is expected tomorrow.\n";
    else if (t1 <= t2 && v2 > v1)
        cout << "MCHS warns! Strong wind is expected tomorrow.\n";
    else
        cout << "No message\n";
}