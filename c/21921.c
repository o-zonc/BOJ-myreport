#include <stdio.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int val = 0;
    int max = 0;
    int cnt = 0;

    for (int i = 0; i < n - x + 1; i++) {
        if (i == 0) {
            for (int j = 0; j < x; j++) {
                val += arr[j];
            }
            max = val;
            cnt = 1;
        } else {
            val = val - arr[i - 1] + arr[i + x - 1];

            if (val == max) {
                cnt++;
            } else if (val > max) {
                max = val;
                cnt = 1;
            }
        }
    }

    if (max == 0) printf("SAD");
    else printf("%d\n%d", max, cnt);
}