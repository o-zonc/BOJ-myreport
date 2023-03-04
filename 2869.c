#include <math.h>
#include <stdio.h>

int main() {
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);

    int diff = a - b;
    int maybe = v - a;
    int some = ceil((double)maybe / (double)diff);

    int day = some + 1;

    printf("%d\n", day);
}