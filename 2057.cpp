#include <iostream>

using namespace std;

#define ll long long

int main() {
    ll n, cnt = 2432902008176640000LL;
    cin >> n;

    if (n == 0) {
        cout << "NO";
        return 0;
    }
    for (int i = 20; i >= 1; i--) {
        cnt /= i;
        if (n >= cnt) n -= cnt;
    }

    if (n == 0)
        cout << "YES";
    else
        cout << "NO";
}