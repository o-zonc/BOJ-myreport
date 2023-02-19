#include <stdio.h>

int main() {
    int a, b, c;
    int cnt = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int t = a * b * c;

    int ext[10] = {0,};
    while (t != 0) {
        int z = t % 10;
        ext[z] += 1;
        t /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", ext[i]);
    }
    return 0;
}