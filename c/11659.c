#include <stdio.h>

typedef struct {
    int a;
    int b;
} array;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int prfx[n + 1];
    prfx[0] = 0;
    for (int i = 0; i < n; i++) {
        prfx[i + 1] = prfx[i] + arr[i];
    }

    array mx[k];
    for (int i = 0; i < k; i++) {
        scanf("%d %d", &mx[i].a, &mx[i].b);
        printf("%d\n", prfx[mx[i].b] - prfx[mx[i].a - 1]);
    }
}