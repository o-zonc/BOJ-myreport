#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int dp[11] = {1, 1, };
    for (int i = 2; i < 11; i++) {
        dp[i] = i * dp[i - 1];
    }

    int combi = dp[n] / (dp[n - k] * dp[k]);
    printf("%d\n", combi);
    return 0;    
}