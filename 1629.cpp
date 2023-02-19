#include <iostream>

using namespace std;

long long modfpow(long long a, long long b, long long m) {
    if (b == 0) return 1;
    if (b == 1)
        return a % m;
    long long x = modfpow(a, b / 2, m) % m;
    if (b % 2 == 0)
        return (x * x) % m;
    else
        return ((x * x) % m) * (a % m) % m;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long a, b, c;
    cin >> a >> b >> c;

    cout << modfpow(a, b, c);
}