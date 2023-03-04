#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int s, a, b;
    cin >> s>>a>>b;

    int ans = (s > a) ? ((s - a) % b == 0) ? 250 + (s - a) / b * 100 : 250 + (s - a + b) / b * 100 : 250;
    cout << ans;
}