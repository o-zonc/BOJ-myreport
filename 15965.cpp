#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

bool prime[7400000];
vector<int> p;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    p.push_back(2);

    for (int j = 4; j <= 7370001; j += 2) {
        prime[j] = 1;
    }

    for (int i = 3; i <= sqrt(7370001); ++i) {
        if (!prime[i]) {
            p.push_back(i);
            for (int j = i * i; j <= 7370001; j += i + i) {
                prime[j] = 1;
            }
        }
    }

    int n;
    cin >> n;

    int cnt = 1;
    for (int i = 2; i <= 7368787; ++i) {
        if (!prime[i]) {
            if (n == cnt) {
                cout << i;
                break;
            }
            cnt++;
        }
    }
}