#include <iostream>

using namespace std;

int arr[8][4];
int cnt[4];

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int sml = 1;
    int lrg = 1;

    int k;
    cin >> k;
    for (int i = 0; i < 6; i++) {
        cin >> arr[i][0] >> arr[i][1];
        cnt[arr[i][0]]++;
    }

    for (int i = 0; i < 6; i++) {
        if (cnt[arr[i][0]] == 1) {
            lrg *= arr[i][1];
            continue;
        }

        int here = (i + 1) % 6;
        int next = (i + 2) % 6;
        if (arr[i][0] == arr[next][0]) sml *= arr[here][1];
    }

    cout << (lrg - sml) * k;

    return 0;
}