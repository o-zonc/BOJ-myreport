#include <iostream>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

ll gcd(ll a, ll b) { return b ? gcd(a, b % a) : b; }

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int grundy = 0;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        grundy ^= p;
    }

    if (grundy)
        cout << "koosaga";
    else
        cout << "cubelover";
}