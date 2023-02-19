#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string cr;
    cin >> cr;

    // č	c=
    // ć	c-
    // dž	dz=
    // đ	d-
    // lj	lj
    // nj	nj
    // š	s=
    // ž	z=

    int cnt = 0;

    int len = cr.length();
    for (int i = 0; i < len; i++) {
        if (cr[i] == 'c' && i < len - 1) {
            if (cr[i + 1] == '=') {
                i++;
            } else if (cr[i + 1] == '-') {
                i++;
            }
        } else if (cr[i] == 'd' && i < len - 2) {
            if (cr[i + 1] == 'z' && cr[i + 2] == '=') {
                i += 2;
            } else if (cr[i + 1] == '-') {
                i++;
            }
        } else if (cr[i] == 'd' && i < len - 1) {
            if (cr[i + 1] == '-') {
                i++;
            }
        } else if (cr[i] == 'l' && i < len - 1) {
            if (cr[i + 1] == 'j') {
                i++;
            }
        } else if (cr[i] == 'n' && i < len - 1) {
            if (cr[i + 1] == 'j') {
                i++;
            }
        } else if (cr[i] == 's' && i < len - 1) {
            if (cr[i + 1] == '=') {
                i++;
            }
        } else if (cr[i] == 'z' && i < len - 1) {
            if (cr[i + 1] == '=') {
                i++;
            }
        }
        cnt++;
    }

    cout << cnt;
}