#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int iicnt = 0;
    int vcnt = 0;
    int iim = 256;
    int vm = 125;
    while (1) {
        iicnt += n / iim;
        if (iim == 2) break;
        iim /= 2;    
    }
    while (1) {
        vcnt += n / vm;
        if (vm == 5) break;
        vm /= 5;
    }

    int cnt = (iicnt > vcnt) ? vcnt : iicnt;
    printf("%d\n", cnt);
}