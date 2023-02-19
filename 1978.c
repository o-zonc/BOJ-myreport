#include <stdio.h>
#include <stdlib.h>

int isprime(int n) {
    if (n == 1) return 0;
    if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19 || n == 23 || n == 29 || n == 31) {
        return 1;
    } else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0 && n % 11 != 0 && n % 13 != 0 && n % 17 != 0 && n % 19 != 0 && n % 23 != 0 && n % 29 != 0 && n % 31 != 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    int *arr;

    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += isprime(arr[i]);
    }

    printf("%d\n", cnt);
    return 0;
}