#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int cnt = 1;
    cout << fixed;
    cout.precision(1);
    while (true) {
        int n;
        cin >> n;

        if (n == 0) break;

        vector<int> arr;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            arr.push_back(a);
        }

        cout << "Case " << cnt++ << ": ";

        if (n % 2) {
            cout << (double) arr[n / 2] << '\n';
        } else {
            cout << (double) (arr[n / 2] + arr[(n - 1) / 2]) / 2 << '\n';
        }
    }
}