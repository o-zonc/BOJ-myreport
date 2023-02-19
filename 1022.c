#include <stdio.h>
#include <math.h>

int value(int r, int c) {
    int val;
    int edge = (abs(r) >= abs(c)) ? abs(r) : abs(c);

    int xeg = pow(2 * edge + 1, 2);

    if (abs(r) == edge) {
        if (r >= 0) {
            val = xeg - edge + c;
        } else {
            val = xeg - (5 * edge) - c;
        }
    } else if (abs(c) == edge) {
        if (c < 0) {
            val = xeg - (3 * edge) + r;
        } else {
            val = xeg - (7 * edge) - r;
        }
    }

    return val;
}

int main() {
    int r1, c1, r2, c2;
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    
    int x = r2 - r1 + 1;
    int y = c2 - c1 + 1;
    int arr[x][y];

    int maxdigit = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            arr[i][j] = value(r1 + i, c1 + j);
            if (maxdigit < floor(log10(arr[i][j])) + 1) {
                maxdigit = floor(log10(arr[i][j])) + 1;
            }
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            int digit = floor(log10(arr[i][j])) + 1;
            for (int k = 0; k < maxdigit - digit; k++) {
                printf(" ");
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}