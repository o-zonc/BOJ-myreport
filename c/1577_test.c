#include <stdio.h>

int main() {
    while (1) {
        int k;
        scanf("%d", &k);
        if (k == 0) break;

        int arr[100] = {0,};
        arr[1] = 1;
        for (int i = 1; i <= 100; i++) {
            for (int j = 2 * i; j <= 100; j += i) {
                arr[j] -= arr[i];
            }
        }

        int sum = 0;
        for (int i = 1; i <= k; i++) {
            if (arr[i] >= 0) sum += arr[i];
            else sum -= arr[i];
        }
        printf("%d\n", sum);

        int cnt = 0;
        for (int i = 1; i * i <= k; i++) {
            cnt += arr[i] * k / (i * i);
        }
        printf("%d\n", cnt);
    }
    
}