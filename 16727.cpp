#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int p1, s1, p2, s2;
    cin >> p1 >> s1 >> s2 >> p2;

    if (p1 + p2 > s1 + s2) {
        cout << "Persepolis";
    } else if (p1 + p2 < s1 + s2) {
        cout << "Esteghlal";
    } else {
        if (p2 > s1) {
            cout << "Persepolis";
        } else if (p2 < s1) {
            cout << "Esteghlal";
        } else {
            cout << "Penalty";
        }
    }
}