#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    int cnt = 1;
    while (n > 1) {
        n -= 6 * cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}