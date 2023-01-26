#include <stdio.h>

int main() {
    int get, count = 0;
    int money = 1000;

    scanf("%d", &get);

    int change = money - get;

    count += change / 500;
    change = change % 500;

    count += change / 100;
    change = change % 100;

    count += change / 50;
    change = change % 50;

    count += change / 10;
    change = change % 10;
    
    count += change / 5;
    change = change % 5;

    count += change;

    printf("%d\n", count);
}