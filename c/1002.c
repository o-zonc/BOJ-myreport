#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        double turret = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        double minus = r1 > r2 ? r1 - r2 : r2 - r1;

        if (turret == 0 && r1 == r2) {
            printf("-1\n");
        } else if (turret == r1 + r2 || turret == minus) {
            printf("1\n");
        } else if (turret < r1 + r2 && minus < turret) {
            printf("2\n");
        } else {
            printf("0\n");
        }
    }

    return 0;
}