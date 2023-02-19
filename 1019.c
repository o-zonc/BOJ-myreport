#include <stdio.h>

int ans[10];
void calc(int n, int p) {
    while (n > 0) {
        ans[n % 10] += p;
        n /= 10;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    
    int s = 1;
    int p = 1;
    while (s <= n) {
        while (n % 10 != 9 && s <= n) {
            calc(n, p);
            n--;
        }

        if (n < s) {
            break;
        }

        while (s % 10 != 0 && s <= n) {
            calc(s, p);
            s++;
        }

        s /= 10;
        n /= 10;

        for (int i = 0; i < 10; i++) {
            ans[i] += (n - s + 1) * p;
        }

        p *= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", ans[i]);
    }
}