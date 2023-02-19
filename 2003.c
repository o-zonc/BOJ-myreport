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
    int cnt = 0;
    
    while (end <= n) {
        if (psum >= s) {
            psum -= seq[start++];
        } else if (psum < s) {
            psum += seq[end++];
        }
        if (psum == s) {
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}