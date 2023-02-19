#include <stdio.h>
#include <string.h>

char word[1000005];
int alpha[26];

int main(){
    int max = 0;
    int size;
    char ans;

    scanf("%s", word);
    size = strlen(word);

    for(int i = 0; i < size; i++) {
        if(word[i] >= 'a') alpha[word[i] - 'a']++;
        else alpha[word[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
        if(alpha[i] == max){
            ans = '?';
        }
        else if(alpha[i] > max){
            max = alpha[i];
            ans = 'A' + i;
        }

    printf("%c",ans);

    return 0;
}