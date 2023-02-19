#include <iostream>
#include <queue>

using namespace std;

queue<int> survivor;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    // code
    for (int i = 1; i <= n; i++) {
        survivor.push(i);
    }

    cout << "<";
    while (!survivor.empty()) {
        for (int i = 0; i < k - 1; i++) {
            int a = survivor.front();
            survivor.pop();
            survivor.push(a);
        }
        cout << survivor.front();
        survivor.pop();
        if (survivor.empty()) cout << ">";
        else cout << ", ";
    }
}