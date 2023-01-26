#include <stdio.h>
#include <math.h>

#define MAX 42000
int arr[MAX] = {0};

long long mertens(long long k) {
    long long cnt = 0;
    for (long long i = 1; i * i <= k; i++) {
        cnt += arr[i] * k / (i * i);
    }
    return cnt;
}

int main() {
    long long k;
    scanf("%lld", &k);

    // mobius function : m(1) == 1, m(SFI) == -1 if SFI has odd numbers of factors or 1 if SFI has even numbers of factors, m(SI) == 0
    arr[1] = 1;
    for (int i = 1; i <= MAX; i++) {
        // arr[30]의 경우 (SFI),
        // i == 1 : arr[30] -= arr[1] (==  1)
        // i == 2 : arr[30] -= arr[2] (== -1)
        // i == 3 : arr[30] -= arr[3] (== -1)
        // i == 5 : arr[30] -= arr[5] (== -1)
        // i == 6 : arr[30] -= arr[6] (== -1)
        // i == 10: arr[30] -= arr[10](==  1)
        // arr[50]의 경우 (FI),
        // i == 1 : arr[50] -= arr[1] (==  1)
        // i == 2 : arr[50] -= arr[2] (== -1)
        // i == 5 : arr[50] -= arr[5] (== -1)
        // i == 10: arr[50] -= arr[10](==  1)
        // i == 25: arr[50] -= arr[25](==  0)
        for (int j = 2 * i; j <= MAX; j += i) {
            arr[j] -= arr[i];
        }
    }

    long long first = 0;
    long long last = 2 * k;
    while (first < last - 1) {
        long long mid = (first + last) / 2;
        if (mertens(mid) < k) first = mid;
        else last = mid;
    }
    printf("%lld\n", last);
    return 0;
}