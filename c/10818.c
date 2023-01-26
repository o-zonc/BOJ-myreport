#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int m;
    scanf("%d", &m);

    int max = m;
    int min = m;

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &m);
        if (m > max) {
            max = m;
        }
        if (m < min) {
            min = m;
        }
    }

    printf("%d %d\n", min, max);
    return 0;
}