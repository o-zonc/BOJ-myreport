#include <stdio.h>

int acm(int h, int w, int n) {
    int floor = (n % h == 0) ? h : n % h;
    int roomno = (n % h == 0) ? n / h : n / h + 1;
    printf("%d%02d\n", floor, roomno);
}

int main() {
    int t;

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);
        acm(a, b, c);
    }
    return 0;
}