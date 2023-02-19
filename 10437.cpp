#include <iostream>

using namespace std;

void spiral(int idx, int x, int y) {
    if (y > x) {
        cout << idx << " " << 2 << " " << x << " " << y << '\n';
    } else if (y >= 4) {
        cout << idx << " " << 6 << " " << 1 << " " << 2 << " " << 3 << " " << x + 5 - y << " " << x + 2 << " " << x + 3 << '\n';
    } else {
        cout << idx << " " << "NO PATH" << '\n';
    }
}

int main() {
    int p;
    cin >> p;

    for (int i = 0; i < p; i++) {
        int idx, x, y;
        cin >> idx >> x >> y;
        spiral(idx, x, y);
    }
}