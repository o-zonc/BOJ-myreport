#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        int p;
        cin >> p;

        double ans = 0;
        while (p--) {
            string s;
            int n;
            double cost;

            cin >> s >> n >> cost;

            ans += n * cost;
        }

        cout << fixed;
        cout.precision(2);

        cout << '$' << ans << '\n';
    }
}