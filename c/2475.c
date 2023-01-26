#include <stdio.h>
#include <math.h>

int arr[6];

int main() {
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += pow(arr[i], 2);
    }

    printf("%d\n", sum % 10);
}