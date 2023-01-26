#include <stdio.h>
#include <string.h>

char script[1000005];
int space = 0;

int main() {
    scanf("%[^\n]s", script);

    if (script[0] == ' ') {
        space -= 1;
    }

    if (script[strlen(script) - 1] == ' ') {
        space -= 1;
    }

    for (int i = 0; i < strlen(script); i++) {
        if (script[i] == ' ') {
            space += 1;
        }
    }

    printf("%d", space + 1);
    return 0;
}