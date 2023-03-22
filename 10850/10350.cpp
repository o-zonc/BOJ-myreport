#include <cmath>
#include <iostream>

using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    ll arr[20010], sum = 0;
    arr[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[n + i] = arr[i];
        sum += arr[i];
    }

    ll psum[20010];
    for (int i = 0; i <= 2 * n; i++) {
        if (i == 0)
            psum[i] = arr[i];
        else
            psum[i] = psum[i - 1] + arr[i];
    }

    ll cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n + i; j++) {
            ll pfx = psum[j] - psum[i - 1];
            if (pfx < 0)
                cnt += ceil(((double) -1 * pfx) / sum);
        }
    }

    cout << cnt;
}