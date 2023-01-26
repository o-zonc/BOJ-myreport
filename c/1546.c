#include <stdio.h>

int main() {
    double avg = 0;
    int sum, max = 0;
    int n;

    scanf("%d", &n);

    int m[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &m[i]);
        if (m[i] > max) {
            max = m[i];
        }
    }

    for (int i = 0; i < n; i++) {
        avg += (double) m[i] / max * 100;
    }

    printf("%.15lf", avg / n);
    return 0;
}