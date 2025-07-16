#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char eng[1000];
    int num;

    scanf("%s", eng);
    scanf("%d", &num);

    printf("%c", eng[num-1]);

    return 0;
}