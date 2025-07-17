#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    const int king=1, queen=1, look=2, bishop=2, night=2, pone=8;
    int a, b, c, d, e, f;

    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    printf("%d %d %d %d %d %d", king - a, queen - b, look - c, bishop - d, night - e, pone - f);

    return 0;
}