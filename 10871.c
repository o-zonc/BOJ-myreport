#include <stdio.h>

int n, x;

int main() {
    scanf("%d %d", &n, &x);

    int arr[10001] = {0,};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++) {
        if (arr[j] < x) {
            printf("%d ", arr[j]);
        }
    }

    return 0;
}