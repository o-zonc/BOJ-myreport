#include <iostream>

using namespace std;

#define ll long long

int comb(int n, int k, int m) {
    int a = 1, b = 1;
    for (int i = n; i > n - k; i--)
        a = a * i % m;

    for (int i = k; i >= 2; i--)
        b = b * i % m;

    n = 1, k = m - 2;
    while (k) {
        if (k & 1) n = n * b % m;
        k >>= 1;
        b = b * b % m;
    }
    return a * n % m;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll n, k;
    int m;
    cin >> n >> k >> m;

    int res = 1;
    while (n || k) {
        res = res * comb(n % m, k % m, m) % m;
        n /= m, k /= m;
    }
    
    cout << res;
}