#include <algorithm>
#include <iostream>

using namespace std;

typedef struct {
    int x;
    int y;
} cartes;

bool compare(cartes const& a, cartes const& b) {
    if (a.y == b.y)
        return a.x < b.x;
    else
        return a.y < b.y;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    cartes a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y;
    }

    sort(a, a + n, compare);
    for (int i = 0; i < n; i++) {
        cout << a[i].x << " " << a[i].y << '\n';
    }
}