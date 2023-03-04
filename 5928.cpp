#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int d, h, m;
    cin >> d >> h >> m;

    int time = d * 60 * 24 + h * 60 + m - 16511;

    if (time < 0) {
        cout << "-1";
    } else {
        cout << time;
    }
}