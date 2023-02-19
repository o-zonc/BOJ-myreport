#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n[1002], m[1002];
int cnt;
vector<int> fibo;

void pisano(int a, int b) {
    fibo.push_back(0);
    fibo.push_back(1);
    fibo.push_back(1);
    cnt = 2;

    while (1) {
        fibo.push_back((fibo[cnt] + fibo[cnt - 1]) % b);
        cnt++;

        if (fibo[cnt] == 0 && fibo[cnt - 1] == 1) break;
    }

    cout << a << " " << cnt << '\n';

    fibo.clear();
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a;
    cin >> a;

    for (int i = 1; i <= a; i++) {
        cin >> n[i] >> m[i];
    }

    for (int i = 1; i <= a; i++) {
        pisano(n[i], m[i]);
    }
}