#include <stdio.h>

int main() {
	int n;
    int max = 0;
    int pos = 0;

    for (int i = 1; i < 10; ++i) {
        scanf("%d", &n);
        if (n > max) {
            max = n;
            pos = i;
        }
    }

    printf("%d\n%d", max, pos);
	return 0;
}