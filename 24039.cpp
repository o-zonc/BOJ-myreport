#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const int mx = 10700;
vector<int> prime, spec;
int p[mx + 1];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    prime.push_back(2);
    for (int i = 3; i <= mx; i += 2) {
        if (!p[i]) {
            prime.push_back(i);
            for (int j = i * i; j <= mx; j += 2 * i) p[j] = 1;
        }
    }

    for (int i = 0; i < prime.size() - 1; i++)
        spec.push_back(prime[i] * prime[i + 1]);

    int n;
    cin >> n;

    cout << spec[upper_bound(spec.begin(), spec.end(), n) - spec.begin()];
}