#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    long long vk, jk, vl, jl, vh, dh, jh;
    cin >> vk >> jk >> vl >> jl >> vh >> dh >> jh;

    cout << ((vk * jk) + (vl * jl)) * (vh * dh * jh);
}