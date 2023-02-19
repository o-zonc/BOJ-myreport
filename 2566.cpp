#include <algorithm>
#include <iostream>

using namespace std;

typedef struct {
    int lrg;
    int row;
    int clm;
} mat;

int matrix[9][9];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    mat ans;
    ans.lrg = ans.row = ans.clm = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> matrix[i][j];
            ans.lrg = max(ans.lrg, matrix[i][j]);
            if (ans.lrg == matrix[i][j]) {
                ans.row = i + 1;
                ans.clm = j + 1;
            }
        }
    }

    cout << ans.lrg << '\n' << ans.row << ' ' << ans.clm;
}