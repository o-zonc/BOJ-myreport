#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    int cnt = 1;
    while (cin >> n) {
        if (n == 0) break;
        int arr[n] = {0};
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << "Case " << cnt++ << ": Sorting... done!" << '\n';
    }
}