#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char eng[100];
    int len;

    scanf("%s", eng);
    len = strlen(eng);

    printf("%d", len);

    return 0;
}