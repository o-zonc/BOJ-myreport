#include <stdio.h>

int main() {
    int n, s;
    scanf("%d %d", &n, &s);

    int seq[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &seq[i]);
    }

    int start = 0;
    int end = 0;
    int psum = 0;
    int min = 100001;
    
    while (end <= n) {
        if (psum >= s) {
            psum -= seq[start];
            if (end - start < min) {
                min = end - start;
            }
            start++;
        } else if (psum < s) {
            psum += seq[end++];
        }
    }

    if (min == 100001) min = 0;
    printf("%d\n", min);

    return 0;
}