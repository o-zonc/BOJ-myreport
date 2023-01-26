#include <stdio.h>
#include <string.h>

typedef struct {
    char ps[50];
    int cnt;
} vps;

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        vps v;
        v.cnt = 0;
        scanf("%s", v.ps);

        for (int j = 0; j < strlen(v.ps); j++) {
            if (v.ps[j] == '(') {
                v.cnt++;
            } else v.cnt--;

            if (v.cnt < 0) {
                printf("NO\n");
                break;
            }
        }

        if (v.cnt == 0) {
            printf("YES\n");
        } else if (v.cnt > 0) {
            printf("NO\n");
        }
    }
}