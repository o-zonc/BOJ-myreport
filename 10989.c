#include <stdio.h>

int a = 0;
int b = 0;
int arr[10001];

int main() {
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        arr[b] += 1;
    }
    for (int i = 0; i < 10001; i++) {
        if (arr[i] == 0) continue;
        else {
            for (int j = 0; j < arr[i]; j++) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}