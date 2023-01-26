#include <stdio.h>
#include <math.h>

long long psq[1000001];

int main() {
    long long min, max;
    scanf("%lld %lld", &min, &max);

    for (long long i = 2; i * i <= max; i++) {
        long long val = min / (i * i);
        if (min % (i * i) != 0) {
            val++;
        }

        while (val * i * i <= max) {
            psq[val * i * i - min] = 1;
            val++;
        }
    }

    long long cnt = 0;

    for (long long i = 0; i <= max - min; i++) {
        if (psq[i] == 0) {
            cnt++;
        }
    }
    printf("%lld\n", cnt);
    return 0;
}