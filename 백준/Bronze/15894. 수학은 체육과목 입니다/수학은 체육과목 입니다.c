#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long n; //밑 도형 개수, int로 하면 오버플로우가 발생해서 long으로 함
    int circumference; //둘레

    scanf("%ld", &n);
    circumference = 4 * n;

    printf("%ld", circumference);

    return 0;
}