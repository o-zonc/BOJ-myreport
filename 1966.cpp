#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int cnt = 1;
        int n, m;
        cin >> n >> m;

        priority_queue<int> pq;
        queue<pair<int, int>> q;

        for (int j = 0; j < n; j++) {
            int importance;
            cin >> importance;
            q.push({importance, j});
            pq.push(importance);
        }

        while (!q.empty()) {
            int prior = q.front().first;
            int loc = q.front().second;
            q.pop();

            if (pq.top() == prior) {
                pq.pop();
                if (m == loc) {
                    cout << cnt << '\n';
                    break;
                }
                cnt++;
            } else {
                q.push({prior, loc});
            }
        }
    }
}