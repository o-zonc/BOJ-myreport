#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int point[2];
} cartesian;

int compare(const void *a, const void *b) {
    cartesian c1 = *(cartesian*)a;
    cartesian c2 = *(cartesian*)b;

    if (c1.point[0] > c2.point[0]) return 1;
    else if (c1.point[0] < c2.point[0]) return -1;
    else {
        if (c1.point[1] > c2.point[1]) return 1;
        else return -1;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    cartesian c[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &c[i].point[0], &c[i].point[1]);
    }

    qsort(c, n, sizeof(cartesian), compare);
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", c[i].point[0], c[i].point[1]);
    }
    return 0;
}