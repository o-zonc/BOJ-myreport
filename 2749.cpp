#include <iostream>

#define ll long long
#define MAX 1500000

using namespace std;

int fibo[MAX];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll n;
    cin >> n;
    n %= MAX;

    fibo[0] = 0;
    fibo[1] = 1;

    if (n >= 2)
        for (int i = 2; i <= n; i++) {
            fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 1000000;
        }
    cout << fibo[n];
}