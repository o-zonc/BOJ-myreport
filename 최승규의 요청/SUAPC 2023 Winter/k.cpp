#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int clock[n];
    for (int i = 0; i < n; i++) {
        int h, m;
        char buf;
        cin >> h >> buf >> m;

        clock[i] = (h - 1) * 60 + m;
    }

    sort(clock, clock + n);
}