#include <stdio.h>

typedef struct {
    long long arr[2][2];
} Mx;

long long mulmod(long long x, long long y, long long m) {
    x %= m;
	y %= m;
	long long temp = x;
	long long result = 0;
	while (y > 0) {
		if (y & 1) {
			result = (result + temp) % m;
		}
		temp = (2 * temp) % m;
		y >>= 1;
	}
	return result;
}

Mx mx_mul (Mx a, Mx b, long long m) {
    Mx result;
    int i, j, k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            result.arr[i][j] = 0;
            for (k = 0; k < 2; k++) {
                long long res = mulmod(a.arr[i][k], b.arr[k][j], m);
                result.arr[i][j] = (result.arr[i][j] + res) % m;
            }
        }
    }   
    return result;
}

Mx mx_pow (Mx a, long long k, long long m) {
    Mx result;
    result.arr[0][0] = 1, result.arr[0][1] = 0;
    result.arr[1][0] = 0, result.arr[1][1] = 1;

    while (k > 0) {
        if (k & 1) {
            result = mx_mul(result, a, m);
        }
        a = mx_mul(a, a, m);
        k >>= 1;
    }
    return result;
}

int main() {
    long long m, a, c, x0, n, g;

    scanf("%lld %lld %lld %lld %lld %lld", &m, &a, &c, &x0, &n, &g);

    x0 %= m;
    a %= m;
    c %= m;

    Mx R, E, F;
    R.arr[0][0] = x0, R.arr[0][1] = 1,
    R.arr[1][0] = 0,  R.arr[1][1] = 0;
    E.arr[0][0] = a,  E.arr[0][1] = 0,
    E.arr[1][0] = c,  E.arr[1][1] = 1;
    
    F = mx_pow(E, n, m);
    Mx result = mx_mul(R, F, m);

    printf("%lld", result.arr[0][0] % g);
}