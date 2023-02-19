#include <stdio.h>
#include <math.h>

int main() {
    int n, m, lst;

    scanf("%d", &n);

    int digits = floor(log10(n) + 1);

    int para = n - digits * 9;
    int ans = 0;
    for (int i = para; i < n; i++) {
        int tmp = i;
        int sum = i;

        while (tmp != 0) {
            sum += tmp % 10;
            tmp /= 10;
        }

        if (sum == n) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}