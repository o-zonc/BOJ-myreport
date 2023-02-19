#include <stdio.h>
#include <string.h>

int main() {
    char jh[1000];
    char hos[1000];

    scanf("%s", jh);
    scanf("%s", hos);
    if (strlen(jh) >= strlen(hos)) {
        printf("go\n");
    } else printf("no\n");
}