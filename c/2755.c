#include <stdio.h>

int dp[15][15] = {0,};

void calc() {
    for (int i = 0; i < 15; i++) {
        dp[i][0] = 0;
        dp[0][i] = i;
    }

    for (int k = 1; k < 15; k++) {
        for (int n = 1; n < 15; n++) {
            for (int i = 0; i <= n; i++) {
                dp[k][n] += dp[k - 1][n - i];
            }
        }
    }
}

int main() {
    calc();

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int k, n;
        scanf("%d", &k);
        scanf("%d", &n);

        printf("%d\n", dp[k][n]);
    }
    return 0;
}