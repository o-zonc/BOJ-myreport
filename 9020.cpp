#include <iostream>

using namespace std;

int prime[10001] = {
    1,
    1,
};

typedef struct {
    int smallp;
    int largep;
} goldbach;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 2; i <= 100; i++) {
        for (int j = 2 * i; j <= 10000; j += i) {
            prime[j] = 1;
        }
    }

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        goldbach part;
        part.smallp = part.largep = n / 2;

        while (true) {
            if (prime[part.smallp] == 0 && prime[part.largep] == 0) {
                break;
            } else {
                part.smallp--;
                part.largep++;
            }
        }

        cout << part.smallp << ' ' << part.largep << '\n';
    }
}