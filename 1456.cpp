#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define MAX 100000000000000LL

bool prime[10000010];
vector<ll> p;
vector<ll> almostp;

void get_prime() {
    for (int i = 4; i <= 10000000; i += 2) {
        prime[i] = 1;
    }
    p.push_back(2);
    for (int i = 3; i <= 10000000; i += 2) {
        if (!prime[i]) {
            p.push_back(i);
            for (int j = 2 * i; j <= 10000000; j += i) {
                prime[j] = 1;
            }
        }
    }

    int z = p.size();

    for (int i = 0; i < z; i++) {
        ll s = p[i];

        ll q = s * s;
        for (int i = 2; i < 47; i++) {
            if (q > MAX)
                break;
            else {
                almostp.push_back(q);
                if (q > LLONG_MAX / s) break;
                q *= s;
            }
        }
    }

    sort(almostp.begin(), almostp.end());
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    get_prime();

    ll a, b;
    cin >> a >> b;

    int start = lower_bound(almostp.begin(), almostp.end(), a) - almostp.begin();
    int end = upper_bound(almostp.begin(), almostp.end(), b) - almostp.begin();

    cout << end - start;
}