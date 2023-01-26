#include <stdio.h>

int main() {
    int a, b;
    int c, d, e, f;
    scanf("%d", &a);
    scanf("%d", &b);
    int x, y, z;
    x = b / 100;
    y = (b / 10) % 10;
    z = b % 10;
    printf("%d\n", z * a);
    printf("%d\n", y * a);
    printf("%d\n", x * a);
    printf("%d\n", a * b);
    return 0;
}