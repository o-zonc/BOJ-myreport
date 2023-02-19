#include <stdio.h>

int main() {
    int bowl[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &bowl[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (bowl[j] > bowl[j + 1]) {
                int temp = bowl[j];
                bowl[j] = bowl[j + 1];
                bowl[j + 1] = temp;
            }
        }
    }

    printf("%d\n", bowl[1]);
    return 0;
}