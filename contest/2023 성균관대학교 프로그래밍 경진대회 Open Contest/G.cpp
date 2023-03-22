#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define p pair<int, int>
#define vt vector<pair<int, int> >

bool compare(p a, p b) {
    return a.first * b.second > a.second * b.first;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    vt arr(n);

    int pi, qi;
    for (int i = 0; i < n; i++) {
        cin >> pi >> qi;
        arr[i] = make_pair(pi, qi);
    }

    sort(arr.begin(), arr.end(), compare);

    int ap = 0, aq = 0;
    for (int i = 0; i < k; i++) {
        ap += arr[i].first;
        aq += arr[i].second;
    }

    long double ans = (long double)ap / aq;

    cout << fixed;
    cout.precision(10);
    cout << ans;
}