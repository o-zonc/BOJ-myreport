#include <stdio.h>

#define NMAX 1000003

int tau[NMAX];

int main() {
    int N, i, j;
    scanf("%d", &N);

    for (i = 1; i <= N; ++i) {
        for (j = 1; j * i <= N; ++j) {
            tau[j * i]++;
        }
    }

    for (i = 1; i <= N; ++i) {
        printf("%d", tau[i]);
    }
    return 0;
}