#include <stdio.h>

int main() {
    int h, m;

    scanf("%d %d", &h, &m);

    int clk = h * 60 + m;

    int sg = clk - 45;
    if (sg < 0) {
        sg += 1440;
    }

    h = sg / 60;
    m = sg % 60;

    printf("%d %d", h, m);
    return 0;
}