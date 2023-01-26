#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second) {
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    scanf("%d", &k);
    int g = n / k;
    int start = 0;
    for (int l = 0; l < k; l++) {
        int sort[g];
        for (int i = start; i < start + g; i++) {
            sort[i - start] = arr[i];
        }

        qsort(sort, g, sizeof(int), compare);
        for (int i = 0; i < g; i++) {
            printf("%d ", sort[i]);
        }
        start += g;
    }
}