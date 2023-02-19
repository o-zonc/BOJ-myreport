#include <iostream>

using namespace std;

unsigned long long fibo[50] = {0, 1, 1};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;
    
    for (int i = 3; i <= n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    cout << fibo[n];
}