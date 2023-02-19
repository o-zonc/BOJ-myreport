#include <iostream>

using namespace std;

typedef struct {
    int x;
    int y;
    int z;
} macaron;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    macaron a, b;
    cin >> a.x >> a.y >> a.z >> b.x >> b.y >> b.z;
    cout << b.x - a.z << " " << b.y / a.y << " " << b.z - a.x;
}