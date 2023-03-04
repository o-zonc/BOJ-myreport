#include <iostream>

using namespace std;


int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int j = 0; j < 3; j++) {
        int aa = 0, ad = 0;

        for (int i = 0; i < 3; i++) {
            int k;
            cin >> k;

            if (i == 0) {
                aa += k * 3600;
            } else if (i == 1) {
                aa += k * 60;
            } else {
                aa += k;
            }
        }

        for (int i = 0; i < 3; i++) {
            int k;
            cin >> k;

            if (i == 0) {
                ad += k * 3600;
            } else if (i == 1) {
                ad += k * 60;
            } else {
                ad += k;
            }
        }

        int work = ad - aa;

        cout << work / 3600 << ' ' << (work / 60) % 60 << ' ' << work % 60 << '\n';
    }
}