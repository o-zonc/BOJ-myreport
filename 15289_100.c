#include <stdio.h>
#include <math.h>

int r = 31;
int m = 1234567891;

int hash(char *str, int len) {
    long long int sum = 0;
    long long int bigr = 1;
    for (int i = 0; i < len; i++) {
        sum = (sum + (str[i] - 'a' + 1) * bigr) % m;
        bigr = (bigr * r) % m;
    }

    return sum;
}

int main() {
    int l;
    scanf("%d", &l);

    char str[l];
    scanf("%s", str);

    printf("%d\n", hash(str, l));
    return 0;
}