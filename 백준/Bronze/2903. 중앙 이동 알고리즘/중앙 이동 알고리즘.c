#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int num; 
    int first = 3; //초기값
    int inc = 2; //초기 2의 1승

    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        first += inc;
        inc *= 2;
    }

    printf("%d", first * first);
}