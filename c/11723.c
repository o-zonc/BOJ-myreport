#include <stdio.h>

int cur = 0;

int main() {
    int m;
    scanf("%d", &m);

    char t[7];
    int x;
    for (int i = 0; i < m; i++) {
        scanf("%s %d", t, &x);

        int k = 1 << (x - 1);
        if (t[0] == 'a' && t[1] == 'd') {
            cur |= k;
        } else if (t[0] == 'a' && t[1] == 'l') {
            cur = (1 << 20) - 1;
            continue;
        } else if (t[0] == 'r') {
            cur &= ~k;
        } else if (t[0] == 'c') {
            printf("%d\n", (cur & k) > 0);
        } else if (t[0] == 't') {
            cur ^= k;
        } else if (t[0] == 'e') {
            cur = 0;
            continue;
        }
    }
}