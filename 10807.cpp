#include <iostream>

using namespace std;

int check[202];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        check[v + 100]++;
    }

    int k;
    cin >> k;
    cout << check[k + 100] << '\n';
}