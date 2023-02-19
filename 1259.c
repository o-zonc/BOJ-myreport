#include <stdio.h>
#include <math.h>

void palindrome(int x) {
    int digit = floor(log10(x)) + 1;

    int temp = 0;
    int y = x;
    while (digit--) {
        temp += (x % 10) * (int) pow(10, digit);
        x /= 10;
    }

    if (temp == y) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        palindrome(n);
    }
}