#include <stdio.h>
#include <ctype.h>

int main() {
    char buf[21];
    int j;

    scanf("%s", buf);

    int b;
    int sum = 0;

    for (int i = 0; buf[i]; i++) {
        char c = buf[i];
        if (isupper(c)) {
            b = c - 'A' + 27;
        } else if (islower(c)) {
            b = c - 'a' + 1;
        }

        sum += b;
    }

    int s = 0;

    for (j = 1; j <= sum; j++) {
        if (sum % j == 0) {
            s++;
        }
    }

    if (s == 2 || sum == 1) {
        printf("It is a prime word.");
    } else {
        printf("It is not a prime word.");
    }

    return 0;
}