#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 소수 판별 함수
int isPrime(int n) {
    if (n < 2) return 0; // 0과 1은 소수 아님
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // 나누어떨어지면 소수 아님
    }
    return 1; // 소수
}

int main() {
    int n, num, count = 0;

    scanf("%d", &n); 

    for (int i = 0; i < n; i++) {
        scanf("%d", &num); 
        if (isPrime(num)) {
            count++; // 소수면 증가
        }
    }

    printf("%d\n", count); 

    return 0;
}
