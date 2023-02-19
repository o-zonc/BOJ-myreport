#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int gcd(int x, int y) {
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int m = arr[1] - arr[0];
    for (int i = 1; i < n - 1; i++) {
        m = gcd(m, arr[i + 1] - arr[i]);
    }

    vector<int> v;
    for (int i = 1; i * i <= m; i++) {
        if (m % i == 0) {
            v.push_back(i);
            if (i != m / i) {
                v.push_back(m / i);
            }
        }
    }
    sort(v.begin(), v.end());

    for (auto i : v) {
        if (i != 1) cout << i << ' ';
    }
}