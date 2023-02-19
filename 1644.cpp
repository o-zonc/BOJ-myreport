#include <iostream>
#include <vector>

using namespace std;

int prime[4000001];
vector<int> p;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    if (n == 1) {
        cout << 0;
        return 0;
    } else if (n < 4) {
        cout << 1;
        return 0;
    }

    for (int i = 2; i <= 4000001; i++) {
        if (prime[i] == 0) {
            p.push_back(i);
            for (int j = 2 * i; j <= n; j += i) {
                prime[j] = 1;
            }
        }
    }

    int start = 0, end = 1, cnt = 0;
    while (start <= end) {
        int sum = 0;
        for (int i = start; i <= end; i++) {
            sum += p[i];
        }
        if (sum == n) 
            cnt++;
        
        if (sum < n) {
            end++;
        } else {
            start++;
        }

        if (p[end] > n) break;
    }

    cout << cnt;
}