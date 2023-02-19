#include <iostream>
#include <vector>

using namespace std;
vector<int> divisors;

int gcd(int x, int y) {
    if (y == 0) return x;
    else return gcd(y, x % y);
}

void dvs(int n) {
    divisors.push_back(1);
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) divisors.push_back(i);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    if (n == 2) {
        int a, b;
        cin >> a >> b;

        int g = gcd(a, b);
        dvs(g);
        for (auto i: divisors) cout << i << "\n";
    } else {
        int a, b, c;
        cin >> a >> b >> c;

        int g = gcd(a, gcd(b, c));
        dvs(g);
        for (auto i: divisors) cout << i << "\n";
    }
}