#include <iostream>

using namespace std;

#define ll long long

ll bin[55] = {1,};

ll pfs(ll n, ll i = 54) {
    ll ans = n & 1; // n이 홀수라면 1을 더하고, 짝수라면 0으로 시작
    for (ll i = 54; i > 0; i--) {
        if (n & (1LL << i)) {
            ans += bin[i - 1] + (n - (1LL << i) + 1); // 최상위 비트부터 하나씩 차례로 아래로
            n -= 1LL << i;
        }
    }
    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 1; i < 55; i++) {
        bin[i] = bin[i - 1] * 2 + (1LL << i);
    }

    ll a, b;
    cin >> a >> b;

    cout << pfs(b) - pfs(a - 1);
}