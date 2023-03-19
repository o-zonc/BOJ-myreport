#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int amal[25], ina;
vector<int> bmal;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, m;
    cin >> a >> b >> m;

    for (int i = 0; i < m; i++)
        cin >> amal[i];

    int mula = 1;
    for (int i = 0; i < m; i++) {
        ina += amal[m - 1 - i] * mula;
        mula *= a;
    }

    while (ina) {
        bmal.push_back(ina % b);
        ina /= b;
    }

    reverse(bmal.begin(), bmal.end());

    for (auto it : bmal) cout << it << ' ';
}