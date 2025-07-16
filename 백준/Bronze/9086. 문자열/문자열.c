#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int num;
    char testcase[10][1000]; // 최대 1000개 문자열

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%s", testcase[i]);
    }

    for (int i = 0; i < num; i++) {
        int len = strlen(testcase[i]);
        printf("%c%c\n", testcase[i][0], testcase[i][len - 1]);
    }

    return 0;
}