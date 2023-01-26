#include <stdio.h>
#include <stdlib.h>

int compare (void *first, void *second) {
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else 
        return 0;
}

int main() {
    int result[10000] = {0,};
    int count = 0;

    // loop
    while (1) {
        // constants
        int n, m;
        int j, k = 1;
        int c, d = 0;


        // input
        scanf("%d %d", &n, &m);

        if (n == 0 && m == 0) {
            break;
        }

        int *comp = (int*) malloc(sizeof(int) * n);
        int *engi = (int*) malloc(sizeof(int) * m);

        for (int w = 0; w < n; w++) {
            
        }

        // greedy
        
    }

    // output
    
    return 0;
}