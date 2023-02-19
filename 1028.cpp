#include <iostream>
#include <string>

using namespace std;

int arr[755][755];
int ur[755][755], ul[755][755], dr[755][755], dl[755][755];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int r, c;
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        string s;
        cin >> s;
        for (int j = 1; j <= c; j++) {
            arr[i][j] = s[j - 1] - '0';
        }
    }

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (arr[i][j] == 1) {
                ur[i][j] = ur[i - 1][j + 1] + 1;
                ul[i][j] = ul[i - 1][j - 1] + 1;
            }
        }
    }
    for (int i = r; i >= 1; i--) {
        for (int j = 1; j <= c; j++) {
            if (arr[i][j] == 1) {
                dr[i][j] = dr[i + 1][j + 1] + 1;
                dl[i][j] = dl[i + 1][j - 1] + 1;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            for (int k = min(dl[i][j], dr[i][j]); k >= ans + 1; k--) {
                if (ul[i + 2 * (k - 1)][j] >= k && ur[i + 2 * (k - 1)][j] >= k) {
                    ans = max(ans, k);
                    break;
                }
            }
        }
    }

    cout << ans << '\n';
}