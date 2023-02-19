#include <stdio.h>
#include <string.h>

int main() {
    char S[105];
    int arr[26] = {0,};

    for (int a = 0; a < 26; a++) {
        arr[a] -= 1;
    }

    scanf("%s", S);

    int i, j;

    for (i = 0; i < strlen(S); i++) {
        for (j = 0; j < 26; j++) {
            if (arr[j] == -1 && S[i] == j + 'a') {
                arr[j] += i + 1;
            }
        }
    }

    for (int k = 0; k < 25; k++) {
        printf("%d ", arr[k]);
    }
    printf("%d", arr[25]);
    return 0;
}