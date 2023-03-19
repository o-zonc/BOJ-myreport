#include <iostream>
#include <vector>

using namespace std;

typedef struct hot {
    int dist;
    int cost;
} hotel;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<hotel> v;
    for (int i = 0; i < n; i++) {
        hotel a;
        cin >> a.dist >> a.cost;
        v.push_back(a);
    }

    int cnt = 0;
    for (int idx = 0; idx < n; idx++) {
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (i == idx) continue;

            if (v[i].dist <= v[idx].dist && v[i].cost <= v[idx].cost) {
                flag = false;
                continue;
            }
        }
        if (flag) cnt++;
    }

    cout << cnt;
}
