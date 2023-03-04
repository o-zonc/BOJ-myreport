#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

#define MAX 1340000
#define ll long long
ll arr[MAX] = {0};

ll mertens(ll k) {
    ll cnt = 0;
    for (ll i = 1; i * i <= k; i++) {
        cnt += arr[i] * k / (i * i);
    }
    return cnt;
}

int main() {
    ll k;
    cin >> k;

    // mobius function : m(1) == 1, m(SFI) == -1 if SFI has odd numbers of factors or 1 if SFI has even numbers of factors, m(SI) == 0
    arr[1] = 1;
    for (ll i = 1; i <= MAX; i++) {
        // arr[30]의 경우 (SFI),
        // i == 1 : arr[30] -= arr[1] (==  1)
        // i == 2 : arr[30] -= arr[2] (== -1)
        // i == 3 : arr[30] -= arr[3] (== -1)
        // i == 5 : arr[30] -= arr[5] (== -1)
        // i == 6 : arr[30] -= arr[6] (== -1)
        // i == 10: arr[30] -= arr[10](==  1)
        // arr[50]의 경우 (FI),
        // i == 1 : arr[50] -= arr[1] (==  1)
        // i == 2 : arr[50] -= arr[2] (== -1)
        // i == 5 : arr[50] -= arr[5] (== -1)
        // i == 10: arr[50] -= arr[10](==  1)
        // i == 25: arr[50] -= arr[25](==  0)
        for (int j = 2 * i; j <= MAX; j += i) {
            arr[j] -= arr[i];
        }
    }

    ll first = 0;
    ll last = 100000000000;
    while (first < last - 1) {
        ll mid = (first + last) / 2;
        if (mid - mertens(mid) < k) first = mid;
        else last = mid;
    }
    cout << last;
    return 0;
}