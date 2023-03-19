#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct o {
    string name;
    int d;
    int m;
    int y;
} o;

bool cmp(o a, o b) {
    if (a.y == b.y) {
        if (a.m == b.m) {
            return a.d < b.d;
        } else
            return a.m < b.m;
    } else
        return a.y < b.y;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<o> p;
    while (n--) {
        o q;
        cin >> q.name >> q.d >> q.m >> q.y;
        p.push_back(q);
    }

    sort(p.begin(), p.end(), cmp);

    cout << p.back().name << '\n'
         << p.front().name;
}