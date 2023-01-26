#include <stdio.h>

#define NMAX 1000003

int phi[NMAX];

int main() {
    int N, i, j;
    scanf("%d", &N);

    for (i = 1; i <= N; ++i) {
        phi[i] += i;
        for (j = 2; j * i <= N; ++j) {
            phi[j * i] -= phi[i];
        }
    }

    for (i = 1; i <= N; ++i) {
        printf("%d", phi[i]);
    }
    return 0;
}