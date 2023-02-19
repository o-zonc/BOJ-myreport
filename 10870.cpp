#include <iostream>
#include <vector>

using namespace std;

int fibo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    vector<int> arr;
    arr.resize(25);

    int n;
    cin >> n;
    cout << fibo(n);
}