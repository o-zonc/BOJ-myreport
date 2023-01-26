#include <stdio.h>

int main() {
    int ki, q, l, vi, kn, vo;
    scanf("%d %d %d %d %d %d", &ki, &q, &l, &vi, &kn, &vo);
    printf("%d %d %d %d %d %d", 1-ki, 1-q, 2-l, 2-vi, 2-kn, 8-vo);
    return 0;
}