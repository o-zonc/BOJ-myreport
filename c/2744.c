#include <stdio.h>
#include <string.h>

int main() {
    char buf[100];
    scanf("%s", buf);

    for (int i = 0; i < strlen(buf); i++) {
        if ('a' <= buf[i] && buf[i] <= 'z') {
            buf[i] = buf[i] - 'a' + 'A';
        } else if ('A' <= buf[i] && buf[i] <= 'Z') {
            buf[i] = buf[i] - 'A' + 'a';
        }
    }
    printf("%s\n", buf);
}