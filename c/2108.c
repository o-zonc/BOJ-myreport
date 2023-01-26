#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int static compare (const void* first, const void* second) {
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   	// quick sort
    qsort(arr, n, sizeof(int), compare);

    // average
    double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (arr[i]);
	}
	int average = round(sum / n);

    // median
    int median = (n == 1) ? arr[0] : arr[(n+1)/2 - 1];

    // mode
    int index[8001] = {0,};
	int i, idx, m = 0, cnt = 0;

	for (i = 0; i < n; i++) {
		idx = arr[i] + 4000;
		index[idx] += 1;
		
		if (index[idx] > m)
			m = index[idx];
	}

	for (i = 0, idx = 0; i < 8001; i++) {
		if (index[i] == 0)
			continue;

		if (index[i] == m) {
			if (cnt == 0) {
				idx = i;
				cnt += 1;
			} else if (cnt == 1) {
				idx = i;
				break;
			}
		}
	}
	int mode = idx - 4000;

    // range
   	int max = arr[n - 1];
	int min = arr[0];

    int range = max - min;

    printf("%d\n", average);
    printf("%d\n", median);
    printf("%d\n", mode);
    printf("%d\n", range);
    return 0;
}