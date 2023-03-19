#include <iostream>
#include <vector>

using namespace std;

typedef struct hy {
    int w;
    int h;
} whyt;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<whyt> v;
    for (int i = 0; i < n; i++) {
        whyt a;
        cin >> a.w >> a.h;
        v.push_back(a);
    }

    for (int i = 0; i < n; i++) {
        int cnt = 1;
        for (int j = 0; j < n; j++)
            if (v[i].h < v[j].h && v[i].w < v[j].w) cnt++;
        cout << cnt << ' ';
    }
}