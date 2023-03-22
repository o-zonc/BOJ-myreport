#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool prime[320];
vector<int> p, up;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    for (int i = 2; i < 320; i++) {
        if (!prime[i]) {
            p.push_back(i);
            for (int j = 2 * i; j < 320; j += i) {
                prime[j] = true;
            }
        }
    }

    for (int i = a; i <= b; i++) {
        int cnt = 0;

        
    }
}