#include <stdio.h>

int main() {
    int ten[11];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &ten[i]);

        ten[i] %= 42;
    }

    int temp;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (ten[j] > ten[j + 1]) {
                temp = ten[j + 1];
                ten[j + 1] = ten[j];
                ten[j] = temp;
            }
        }
    }

    int cnt = 1;
    for (int i = 0; i < 9; i++) {
        if (ten[i] != ten[i + 1]) {
            cnt += 1;
        }
    }

    printf("%d\n", cnt);
    return 0;
}