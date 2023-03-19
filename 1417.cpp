#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    if (n == 1) {
        cout << 0;
        return 0;
    }

    int fst;
    cin >> fst;

    int p;
    priority_queue<int> q;
    for (int i = 0; i < n - 1; i++) {
        cin >> p;
        q.push(p);
    }

    int ans = 0;
    while (true) {
        int x = q.top();
        q.pop();
        if (x >= fst) {
            x--;
            fst++;
            ans++;
        } else {
            break;
        }
        q.push(x);
    }

    cout << ans;
}