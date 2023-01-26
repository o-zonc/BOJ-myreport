#include <stdio.h>

typedef struct {
    long long arr[2][2];
} Mx;

Mx mx_mul (Mx a, Mx b, long long m);
Mx mx_pow (Mx a, long long k, long long m);

int main() {
	
	long long a, r, n, mod;
	scanf("%lld %lld %lld %lld", &a, &r, &n, &mod);
	
	Mx b;
    b.arr[0][0] = r, b.arr[0][1] = 0, b.arr[1][0] = a, b.arr[1][1] = 1;

    b = mx_pow(b, n, mod);
	
	printf("%lld", b.arr[1][0]);
	
	return 0;
}

Mx mx_mul (Mx a, Mx b, long long m) {
    Mx result;
    int i, j, k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            result.arr[i][j] = 0;
            for (k = 0; k < 2; k++) {
                long long temp = (a.arr[i][k] * b.arr[k][j]) % m;
                result.arr[i][j] = (result.arr[i][j] + temp) % m;
            }
        }
    }   
    return result;
}

Mx mx_pow (Mx a, long long k, long long m) {
    Mx result;
    result.arr[0][0] = 1, result.arr[1][1] = 1;
    result.arr[0][1] = 0, result.arr[1][0] = 0;

    while (k > 0) {
        if (k & 1) {
            result = mx_mul(result, a, m);
        }
        a = mx_mul(a, a, m);
        k >>= 1;
    }
    return result;
}
