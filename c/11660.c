#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int prfx[n + 1][n + 1];
    prfx[0][0] = 0;
    prfx[1][1] = matrix[0][0];
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < n + 1; j++) {
            if (i == 0 || j == 0) {
                prfx[i][j] = 0;
            } else {
                prfx[i][j] = prfx[i - 1][j] + prfx[i][j - 1] - prfx[i - 1][j - 1] + matrix[i - 1][j - 1];
            }
        }
    }

    for (int i = 0; i < m; i++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("%d\n", prfx[c][d] - prfx[a - 1][d] - prfx[c][b - 1] + prfx[a - 1][b - 1]);
    }
}