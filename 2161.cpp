#include <iostream>
#include <queue>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    queue<int> q;
    for (int i = 1; i <= n; i++)
        q.push(i);

    while (true) {
        int t = q.front();
        q.pop();
        cout << t << ' ';

        if (q.empty()) break;

        int x = q.front();
        q.pop();
        q.push(x);
    }
}