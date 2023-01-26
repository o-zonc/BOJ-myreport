#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int *array;

    scanf("%d\n",&size);

    array = (int *)malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++) scanf("%d",&array[i]);

    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    int result = 0;

    for (int i = 0; i < size; i++) {
        result += array[i]*(size - i);
    }

    printf("%d", result);
    free(array);
}