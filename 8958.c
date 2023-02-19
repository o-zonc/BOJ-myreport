#include <stdio.h>
#include <string.h>

int main() {
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++) {
        char buf[81];

        scanf("%s", buf);

        int cnt = 0;
        int sum = 0;
        for (int j = 0; j < strlen(buf); j++) {
            if (buf[j] == 'X') {
                cnt = 0;
            } else {
                cnt += 1;
                sum += cnt;
            }
        }

        printf("%d", sum);
        printf("\n");
    }

    return 0;
}