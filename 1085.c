#include <stdio.h>

int main() {
    int x, y, w, h;

    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    int abx, aby;
    abx = (w - x >= x) ? x : w - x;
    aby = (h - y >= y) ? y : h - y;

    int std = (abx >= aby) ? aby : abx;

    printf("%d\n", std);
    return 0;
}