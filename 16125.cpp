#include <iostream>

using namespace std;

const double pi = 3.14159265;

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

    cartes a, b;
    int r;
    cin >> r >> a.x >> a.y >> b.x >> b.y;

    if (disq(a, b) * r * r < (a.x * b.y - a.y * b.x) * (a.x * b.y - a.y * b.x)) {
        // 두 점의 수직이등분선이 원을 지나지 않을 때
        cout << 0;
    } else {
        // 두 점의 수직이등분선이 원을 지날 때
        
    }
}