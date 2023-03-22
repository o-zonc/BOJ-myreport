#include <iostream>
#include <algorithm>

using namespace std;

typedef struct rec {
    int m;
    int ss;
    int sss;
    char team;
} record;

int point[8] = {10, 8, 6, 5, 4, 3, 2, 1};

bool cmp(record a, record b) {
    if (a.m != b.m) {
        return a.m < b.m;
    } else {
        if (a.ss != b.ss) {
            return a.ss < b.ss;
        } else {
            return a.sss < b.sss;
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    record drift[8];
    for (int i = 0; i < 8; i++) {
        char buf;
        cin >> drift[i].m >> buf >> drift[i].ss >> buf >> drift[i].sss >> drift[i].team;
    }

    sort(drift, drift + 8, cmp);

    int red = 0, blue = 0;
    for (int i = 0; i < 8; i++) {
        if (drift[i].team == 'R') {
            red += point[i];
        } else {
            blue += point[i];
        }
    }

    if (red > blue) {
        cout << "Red";
    } else {
        cout << "Blue";
    }
}