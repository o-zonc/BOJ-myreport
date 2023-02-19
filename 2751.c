#include <stdlib.h>
#include <stdio.h>

int compare(const void *a, const void *b) {
    int n = *(int *)a;
    int m = *(int *)b;

    if (n < m) return -1;
    else if (n > m) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}