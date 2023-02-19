#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = -2 * n + 2; i < 2 * n - 1; i++) {
        for (int j = -2 * n + 2; j < 2 * n - 1; j++) {
            if (i % 2 == 0 && abs(i) >= abs(j)) {
                printf("*");
            } else if (j % 2 == 0 && abs(j) >= abs(i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}