#include <stdio.h>

int main() {
    while (1) {
        int n, m;
        scanf("%d %d", &n, &m);
        if ((n, m) == (0, 0)) break;
        if (n > m) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}