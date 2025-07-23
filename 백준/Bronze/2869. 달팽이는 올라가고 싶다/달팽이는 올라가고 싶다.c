#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 반복문 방식은 v가 1,000,000,000 같은 큰 수일 때 시간 초과된다
int main() {
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);

    int day = (v - b - 1) / (a - b) + 1;

    printf("%d\n", day);
    return 0;

    return 0;
}
