#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    int n;
    cin >> n;

    vector<int> x, y;
    x.push_back(0);
    y.push_back(0);
    x.push_back(b);
    y.push_back(a);
    while (n--) {
        int ck, d;
        cin >> ck >> d;
        if (ck)
            y.push_back(d);
        else
            x.push_back(d);
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    for (int i = 0; i < x.size() - 1; i++)
        x[i] = x[i + 1] - x[i];

    for (int i = 0; i < y.size() - 1; i++)
        y[i] = y[i + 1] - y[i];

    x.pop_back();
    y.pop_back();

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int ans = x.back() * y.back();

    cout << ans;
}