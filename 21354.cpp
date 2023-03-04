#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, p;
    cin >> a >> p;

    int apple = 7 * a, pear = 13 * p;
    if (apple < pear)
        cout << "Petra";
    else if (apple > pear)
        cout << "Axel";
    else
        cout << "lika";
}