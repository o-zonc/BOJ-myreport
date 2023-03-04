#include <iostream>

using namespace std;

typedef struct ship {
    int dist;
    int ducat;
} anton;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;
    for (int cnt = 1; cnt <= t; cnt++) {
        int n, s, d;
        cin >> n >> s >> d;

        anton arr[n];
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i].dist >> arr[i].ducat;

            if ((double) arr[i].dist / s <= d) {
                ans += arr[i].ducat;
            }
        }

        cout << "Data Set " << cnt << ":\n"
             << ans << "\n\n";
    }
}