#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    int order;
    char name[101];
} member;

int compare(const void *a, const void *b) {
    member m1 = *(member*)a;
    member m2 = *(member*)b;

    if (m1.age > m2.age) return 1;
    else if (m1.age < m2.age) return -1;
    else {
        if (m1.order > m2.order) return 1;
        else if (m1.order < m2.order ) return -1;
        else return 0;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    member m[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d %s", &m[i].age, &m[i].name);
        m[i].order = i;
    }

    qsort(m, n, sizeof(member), compare);
    for (i = 0; i < n; i++) {
        printf("%d %s\n", m[i].age, m[i].name);
    }
}