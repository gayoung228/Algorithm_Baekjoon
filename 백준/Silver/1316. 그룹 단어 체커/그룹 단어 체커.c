#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;
    int cnt = 0; 
    int group;
    char word[100];

    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%s", &word);
        group = 1;
        for (int j = 0; j < strlen(word); j++) {
            for (int k = 0; k < j - 1; k++) {
                if (word[j] == word[k] && word[j] != word[j - 1]) {
                    group = 0;
                    break;
                }
            }
            if (group == 0) { //연속 X
                break;
            }
        }
        if (group == 1) { //연속 O
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}