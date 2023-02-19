#include <stdio.h>

int main() {
    int asc[9] = {1, 2, 3, 4, 5, 6, 7, 8};
    int des[9] = {8, 7, 6, 5, 4, 3, 2, 1};

    int s[9];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &s[i]);
    }

    int end = 0;

    for (int i = 0; i < 8; i++) {
        if (asc[i] == s[i]) {
            end += 1;
        } else if (des[i] == s[i]) {
            end -= 1;
        }
    }

    if (end == 8) {
        printf("ascending\n");
    } else if (end == -8) {
        printf("descending\n");
    } else {
        printf("mixed\n");
    }

    return 0;
}