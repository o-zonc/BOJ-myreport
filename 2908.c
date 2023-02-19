#include <stdio.h>

int ss(int x) {
    int temp = 0;
    temp += x / 100;
    temp += (x % 10) * 100;
    temp += ((x / 10) % 10) * 10;
    return temp;
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    int sa = ss(a);
    int sb = ss(b);

    if (sb < sa) {
        printf("%d\n", sa);
    } else {
        printf("%d\n", sb);
    }

    return 0;
}