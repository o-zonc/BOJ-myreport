#include <iostream>

using namespace std;

int chicken(int n, int fry, int soy, int spy) {
    int ans = 0;
    ans += (fry > n) ? n : fry;
    ans += (soy > n) ? n : soy;
    ans += (spy > n) ? n : spy;
    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, fry, soy, spy;
    cin >> n >> fry >> soy >> spy;

    cout << chicken(n, fry, soy, spy);
}