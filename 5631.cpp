#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int z = 1;
    while (1) {
        int n;
        cin >> n;

        if (n == 0) break;

        cout << "Case " << z << ":" << '\n';
        int xarr[n], yarr[n];
        for (int i = 0; i < n; i++) {
            cin >> xarr[i] >> yarr[i];
        }

        int ax, ay, bx, by, q;
        cin >> ax >> ay >> bx >> by >> q;

        for (int i = 0; i < q; i++) {
            int r1, r2;
            cin >> r1 >> r2;

            int aarr[n], barr[n];
            for (int j = 0; j < n; j++) {
                aarr[j] = (ax - xarr[j]) * (ax - xarr[j]) + (ay - yarr[j]) * (ay - yarr[j]);
                barr[j] = (bx - xarr[j]) * (bx - xarr[j]) + (by - yarr[j]) * (by - yarr[j]);
            }

            sort(aarr, aarr + n);
            sort(barr, barr + n);

            int h1, h2;
            h1 = upper_bound(aarr, aarr + n, r1 * r1) - aarr;
            h2 = upper_bound(barr, barr + n, r2 * r2) - barr;
            cout << n - h1 - h2 << '\n';
        }
    }
}