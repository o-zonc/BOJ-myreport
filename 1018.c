#include <stdio.h>

#define ifmin(a, b) a < b ? a : b

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char chess[n][m];
    for (int i = 0; i < n; i++) {
        scanf("%s", &chess[i]);
    }

    int min = 64;
    for (int i = 0; i < n - 7; i++) {
        for (int j = 0; j < m - 7; j++) {
                int cntb = 0;
                int cntw = 0;
                for (int k = i; k < i + 8; k++) {
                    for (int l = j; l < j + 8; l++) {
                        if ((k + l) % 2 == 0) {
                            if (chess[k][l] == 'B') cntw++;
                            else cntb++;
                        } else {
                            if (chess[k][l] == 'W') cntw++;
                            else cntb++;
                        }
                    }
                }
                min = ifmin(min, cntb);
                min = ifmin(min, cntw);
        }
    }
    printf("%d\n", min);
}