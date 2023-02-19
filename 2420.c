#include <stdio.h>

int main() {
    long long n,m;
    scanf("%lld %lld", &n, &m);

    long long diff = (n > m) ? n - m: m - n;

    printf("%lld\n", diff);
    return 0;
}