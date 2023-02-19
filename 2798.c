#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cls = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            for (int k = 0; k < n; k++) {
                if (k == j) continue;
                if (k == i) continue;
                int bj = arr[i] + arr[j] + arr[k];

                if (bj <= m && bj > cls) {
                    cls = bj;
                } 
            }
        }
    }

    printf("%d\n", cls);
    return 0;
}