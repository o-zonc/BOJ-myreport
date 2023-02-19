#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> ans;

    for (int i = 2; i <= n; i++) {
        while (true) {
            if (n % i != 0) break;
            else {
                n /= i;
                ans.push_back(i);
            }
        }
    }

    if (!ans.empty()) {
        int sz = ans.size();
        for (int i = 0; i < sz; i++) {
            cout << ans[i] << '\n';
        }
    }
}