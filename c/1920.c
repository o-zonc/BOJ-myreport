#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int n = *(int *)a;
    int m = *(int *)b;

    if (n > m) return 1;
    else if (n < m) return -1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int m;
    scanf("%d", &m);

    int find[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &find[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < m; i++) {
        int first = 0;
        int last = n - 1;
        while (1) {
            int mid = (first + last) / 2;

            if (first > last) {
                printf("0\n");
                break;  
            }

            if (find[i] == arr[mid]) {
                printf("1\n");
                break;
            } else if (find[i] < arr[mid]) {
                last = mid - 1;
            } else {
                first = mid + 1;
            }
        }
    }
}