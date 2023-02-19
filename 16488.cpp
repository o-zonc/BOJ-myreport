#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    long long n, k;
    cin >> n >> k;
    
    long long ans = k * n * n;
    cout << ans;
}