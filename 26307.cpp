#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int h, m;
    cin >> h >> m;

    int time = (h - 9) * 60 + m;
    cout << time;
}