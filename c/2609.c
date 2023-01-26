#include <stdio.h>

int gcd(int x, int y) {
    int less = x > y ? y : x;

    int i;
    for (i = less; i >= 1; i--) {
        if (x % i == 0 && y % i == 0) {
            break;
        }
    }
    return i;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a = gcd(n, m);
    int b = a * (n / a) * (m / a);
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}