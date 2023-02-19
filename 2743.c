#include <stdio.h>
#include <string.h>

int main() {
    char buf[100];

    scanf("%s", buf);
    int len = strlen(buf);
    printf("%d\n", len);
}