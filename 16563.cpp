#include <iostream>
#include <vector>

using namespace std;

const int MAX = 5000000;
vector<int> p;
int sp[MAX + 1];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 2; i <= MAX; i++) {
        if (!sp[i]) p.push_back(i);
        for (auto j : p) {
            if (i * j > MAX) break;
            sp[i * j] = j;
            if (i % j == 0) break;
        }
    }

    int n;
    cin >> n;

    while (n--) {
        int m;
        cin >> m;

        while (sp[m]) {
            cout << sp[m] << ' ';
            m /= sp[m];
        }

        cout << m << '\n';
    }
}