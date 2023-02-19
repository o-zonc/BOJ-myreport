#include <iostream>

using namespace std;

int score(int arr[]) {
    int scr = arr[0] * 6 + arr[1] * 3 + arr[2] * 2 + arr[3] * 1 + arr[4] * 2;
    return scr;
}

int visit[5], home[5];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    for (int i = 0; i < 5; i++) {
        cin >> visit[i];
    }
    for (int i = 0; i < 5; i++) {
        cin >> home[i];
    }

    cout << score(visit) << ' ' << score(home);
}