#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout << fixed;
    cout.precision(10);

    int t;
    cin >> t;

    while (t--) {
        int n, xt = 0, yt = 0;

        vector<pair<int, int> > points;
        vector<int> comb;

        long long min = -1, now;

        cin >> n;
        points.resize(n);
        comb.resize(n, 0);

        for (int i = 0; i < n; i++) {
            cin >> points[i].first >> points[i].second;
            if (i >= n / 2) comb[i] = 1;
        }

        do {
            xt = yt = 0;
            for (int i = 0; i < n; i++) {
                if (comb[i]) {
                    xt += points[i].first;
                    yt += points[i].second;
                } else {
                    xt -= points[i].first;
                    yt -= points[i].second;
                }
            }

            now = pow(xt, 2) + pow(yt, 2);
            if (min == -1 || min > now) min = now;

        } while (next_permutation(comb.begin(), comb.end()));

        cout << sqrt(min) << '\n';
        points.clear();
    }
}