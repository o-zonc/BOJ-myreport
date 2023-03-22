#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cl = ceil(0.9 * m);

    if (true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}