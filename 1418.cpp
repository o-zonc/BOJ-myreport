#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

const int MAX = 100004;
int prime[MAX + 1], visited[MAX + 1];
vector<int> p;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, k, ans = 0;
    cin >> n >> k;

    for (int i = 2; i <= MAX; i++)
        if (!prime[i]) {
            p.push_back(i);
            for (int j = 2 * i; j <= MAX; j += i) {
                prime[j] = 1;
            }
        }

    int idx = upper_bound(p.begin(), p.end(), n) - p.begin(), hr = upper_bound(p.begin(), p.end(), k) - p.begin();
    for (int i = hr; i <= idx; i++) {
        int q = p[i];
        for (int j = q; j <= n; j += q)
            visited[j] = 1;
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) ans++;
    }

    cout << ans;
}