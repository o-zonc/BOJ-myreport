#include <stdio.h>
#include <math.h>

long long gcd(long long a, long long b) {
    while (b > 0) {
        int r = a % b;
        a = b, b = r;
    }
    return a;
}

long long gcd3(long long a, long long b, long long c) {
    return (gcd(a, gcd(b, c)));
}

int main() {
    long long l;
    scanf("%lld", &l);

    long long a, b, c, cnt = 0;
    for (long long m = 2; m <= l; m++) {
        for (long long n = 1; n < m; n++) {
            a = (pow(m, 2) - pow(n, 2) > 2 * m * n) ? 2 * m * n : pow(m, 2) - pow(n, 2);
            b = (pow(m, 2) - pow(n, 2) > 2 * m * n) ? pow(m, 2) - pow(n, 2) : 2 * m * n;
            c = pow(m, 2) + pow(n, 2);
            if (gcd3(a, b, c) == 1) cnt++;
        }
    }
    printf("%lld\n", cnt);
    return 0;
}