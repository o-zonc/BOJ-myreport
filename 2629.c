#include <stdio.h>
#include <math.h>

int weight[31], dp[31][15001];
int n, k;

void DP(int i, int w) {
    if (n < i || dp[i][w]) {
        return ;
    }

    dp[i][w] = 1;
    DP(i + 1, w);
    DP(i + 1, w + weight[i]);
    DP(i + 1, abs(w - weight[i]));
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &weight[i]);
    }

    DP(0, 0);

    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        int bead;
        scanf("%d", &bead);
        if (bead > 15000) {
            printf("N ");
        } else if (dp[n][bead]) {
            printf("Y ");
        } else {
            printf("N ");
        }
    }
}