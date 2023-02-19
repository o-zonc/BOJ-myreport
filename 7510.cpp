#include <algorithm>
#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> tri;
        tri.push_back(a);
        tri.push_back(b);
        tri.push_back(c);

        sort(tri.begin(), tri.end());
        cout << "Scenario #" << i << ":" << '\n';

        int notwo = pow(tri[0], 2) + pow(tri[1], 2);
        int maxto = pow(tri[2], 2);
        if (notwo == maxto) cout << "yes" << '\n';
        else cout << "no" << '\n';

        cout << '\n';
    }
}