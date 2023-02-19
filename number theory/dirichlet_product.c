#include <stdio.h>

#define NMAX 1000003

int f[NMAX], g[NMAX], fg[NMAX];

int main() {
    int N, i, j;

    scanf("%d", &N);
    for (i = 1; i <= N; ++i) scanf("%d", f[i]);
    for (i = 1; i <= N; ++i) scanf("%d", g[i]);
    for (i = 1; i <= N; ++i) {
        for (j = 1; j * i <= N; ++j) fg[j * i] = f[i] * g[j];
    }

    for (i = 1; i <= N; ++i) printf("%d", fg[i]);
    return 0;
}