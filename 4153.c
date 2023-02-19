#include <stdio.h>
#include <math.h>

void rt(int a, int b, int c) {
    int arr[3];

    arr[0] = a; arr[1] = b; arr[2] = c;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int temp;
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (pow(arr[2], 2) == pow(arr[0], 2) + pow(arr[1], 2)) {
        printf("right\n");
    } else {
        printf("wrong\n");
    }
}

int main() {
    while (1) {
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);
        if ((a, b, c) == (0, 0, 0)) break;

        rt(a, b, c);
    }
    return 0;
}