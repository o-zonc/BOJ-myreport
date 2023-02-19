#include <stdio.h>

int main() {
    char g[2];
    
    scanf("%s", g);

    if (g[0] != 'F') {
        int grade = 0;
        grade += 4 - (g[0] - 'A');
        
        float small;
        if (g[1] == '+') small = 0.3;
        else if (g[1] == '-') small = -0.3;
        else if (g[1] == '0') small = 0.0;

        printf("%.1f\n", grade + small);
    } else if (g[0] == 'F') {
        printf("0.0");
    }
    return 0;
}