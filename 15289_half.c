#include <stdio.h>
#include <math.h>

int r = 31;
int m = 1234567891;

int hash(char *str, int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        int x = str[i] - 'a' + 1;

        sum += x * pow(r, i);
    }

    int hsh = sum % m;
    return hsh;
}

int main() {
    int l;
    scanf("%d", &l);

    char str[l];
    scanf("%s", str);

    printf("%d\n", hash(str, l));
    return 0;
}