#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    int n;
    scanf("%d", &n);

    int s, t;
    for (s = 3; s <= n; s += 2) {
        for (t = 1; t < s; t += 2) {
            if (gcd(s, t) == 1) {
                printf("%d ", s * t);
                printf("%d ", (s*s - t*t)/2);
                printf("%d\n", (s*s + t*t)/2);
            } else continue;
        }
    }
}