#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

#define MAX 100000000

vector<int> p;

void ssp(int n) {
    p.push_back(2);
    p.push_back(3);
    p.push_back(5);
    p.push_back(7);
    for (int i = 0; i < p.size(); i++) {
        int t = p[i] * 10;
        if (t > MAX) continue;

        for (int a = 1; a <= 9; a += 2) {
            int x = t + a;
            bool flag = true;

            for (int i = 3; i < sqrt(x) + 1; i += 2) {
                if (x % i == 0) {
                    flag = false;
                    break;
                }
            }

            if (flag) p.push_back(x);
            
        }
    }

    sort(p.begin(), p.end());

    int start = upper_bound(p.begin(), p.end(), pow(10, n - 1)) - p.begin();
    int end = lower_bound(p.begin(), p.end(), pow(10, n)) - p.begin();

    for (int i = start; i < end; i++) {
        cout << p[i] << '\n';
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    ssp(n);
}