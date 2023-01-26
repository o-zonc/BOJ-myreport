#include <stdio.h>

int main() {
    int n, m, b;

    scanf("%d %d %d", &n, &m, &b);

    int gnd[n][m];
    int min = 256;
    int max = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &gnd[i][j]);
            if (gnd[i][j] < min) min = gnd[i][j];
            if (gnd[i][j] > max) max = gnd[i][j];
        }
    }

    int mintime = 1000000000;
    int maxflr = 0;
    int flr, time;
    for (flr = min; flr <= max; flr++) {
        int xgnd[n][m];
        int psum = 0;
        int nsum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                xgnd[i][j] = gnd[i][j] - flr;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (xgnd[i][j] >= 0) {
                    psum += xgnd[i][j];
                } else if (xgnd[i][j] < 0) {
                    nsum -= xgnd[i][j];
                }
            }
        }

        if (psum + b < nsum) {
            continue;
        } else {
            time = psum * 2 + nsum;
        }

        if (time < mintime) {
            mintime = time;
            maxflr = flr;
        } else if (time == mintime) {
            if (maxflr < flr) {
                maxflr = flr;
            }
        }
    }

    printf("%d %d\n", mintime, maxflr);
    return 0;
}