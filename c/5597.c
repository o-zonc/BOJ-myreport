#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second) {
    if (*(int*)first > *(int*)second)
        return -1;
    else if (*(int*)first < *(int*)second)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    int org[30];
    for (int i = 1; i <= 30; i++) {
        org[i - 1] = i;
    }

    int arr[28] = {0,};
    for (int i = 0; i < 28; i++) {
        scanf("%d", &arr[i]);
        for (int j = 0; j < 30; j++) {
            if (org[j] == arr[i]) {
                org[j] = 0;
            }
        }
    }

    qsort(org, 30, sizeof(int), compare);

    printf("%d\n", org[1]);
    printf("%d\n", org[0]);
    return 0;
}