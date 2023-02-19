#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char word[51];
    int len;
} W;

int compare(const void* a, const void* b) {
    W word1 = *(W*) a;
    W word2 = *(W*) b;
    if (word1.len < word2.len) return -1;
    else if (word1.len > word2.len) return 1;
    else return strcmp(word1.word, word2.word);
}

int main() {
    int n;
    scanf("%d", &n);

    W string[n];
    for (int i = 0; i < n; i++) {
        scanf("%s", &string[i].word);
        string[i].len = strlen(string[i].word);
    }
    qsort(string, n, sizeof(W), compare);

    printf("%s\n", string[0].word);
    for (int i = 1; i < n; i++) {
        if (strcmp(string[i].word, string[i - 1].word) == 0) {
            continue;
        }
        printf("%s\n", string[i].word);
    }
}