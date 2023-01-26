#include <stdio.h>

#define NMAX 1000003

int mu[NMAX] = {0, 1};

int main() {
    int N, i, j;
    scanf("%d", &N);

    for (i = 1; i <= N; ++i) {
        for (j = 2; j * i <= N; ++j) {
            mu[j * i] -= mu[i];
        }
    }
    for (i = 1; i <= N; ++i) {
        printf("%d", mu[i]);
    }
    return 0;
}