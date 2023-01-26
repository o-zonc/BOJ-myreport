#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int mx1[n][m], mx2[n][m], mx[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mx1[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mx2[i][j]);
            mx[i][j] = mx1[i][j] + mx2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mx[i][j]);
        }
        printf("\n");
    }
    return 0;
}