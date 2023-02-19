#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    int *arr;

    scanf("%d", &t);

    arr = (int *)malloc(sizeof(int) * t);

    for (int i = 0; i < t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        arr[i] = a + b;
    }

    for (int j = 0; j < t; j++) {
        printf("%d\n", arr[j]);
    }
    return 0;
}