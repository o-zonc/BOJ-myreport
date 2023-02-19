#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define mx vector<vector<ll>>

mx operator * (mx &a, mx &b) {
    mx res(2, vector<ll>(2));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                res[i][j] += a[i][k] * b[j][k];
            }
            res[i][j] %= 1000000007;
        }
    }

    return res;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;

    mx unit = {{1, 0}, {0, 1}};
    mx fibo = {{1, 1}, {1, 0}};
    while (n) {
        if (n % 2 == 1) unit = unit * fibo;
        fibo = fibo * fibo;
        n /= 2;
    }

    cout << unit[1][0];
}