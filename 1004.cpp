#include <iostream>

using namespace std;

typedef struct {
    int x;
    int y;
} cartes;

int disq(cartes a, cartes b) {
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cartes a, b;
        cin >> a.x >> a.y >> b.x >> b.y;

        int n;
        cin >> n;

        int cnt = 0;

        for (int j = 0; j < n; j++) {
            cartes c;
            int r;
            cin >> c.x >> c.y >> r;

            int disac = disq(a, c), disbc = disq(b, c);
            r *= r;

            if (disac < r && disbc < r) {
                continue;
            } else if (disac > r && disbc > r) {
                continue;
            } else {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
}