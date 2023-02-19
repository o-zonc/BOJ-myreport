#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    char b[101];

    scanf("%s", b);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += b[i] - '0';
    }

    printf("%d\n", sum);
    return 0;
}