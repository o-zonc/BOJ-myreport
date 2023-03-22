#include <stdio.h>

#define NMAX 1000003

int sigma[NMAX];

int main() {
    int N, i, j;
    scanf("%d", &N);

    for (i = 1; i <= N; ++i) {
        for (j = 1; j * i <= N; ++j) {
            sigma[j * i] += i;
        }
    }

    for (i = 1; i <= N; ++i) {
        printf("%d", sigma[i]);
    }
    return 0;
}