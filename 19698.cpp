#include <iostream>

using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, w, h, l;
    cin >> n >> w >> h >> l;

    int ans = (n < (w / l) * (h / l)) ? n : (w / l) * (h / l);
    cout << ans;
}