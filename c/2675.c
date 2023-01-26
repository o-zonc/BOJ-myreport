#include <stdio.h>

char s[21];
int t, r;

void rpt_print(int r, char *arr) {
    for (int j = 0; arr[j]; j++) {
        for (int i = 0; i < r; i++) {
            printf("%c", arr[j]);
        }
    }
    printf("\n");
}

int main() {
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %s", &r, &s);
        rpt_print(r, s);
    }
}