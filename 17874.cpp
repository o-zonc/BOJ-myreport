#include <iostream>

using namespace std;

inline int larger(int a, int b) {
    return (a - b > b) ? a - b : b;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, h, v;
    cin >> n >> h >> v;

    cout << larger(n, h) * larger(n, v) * 4;
}