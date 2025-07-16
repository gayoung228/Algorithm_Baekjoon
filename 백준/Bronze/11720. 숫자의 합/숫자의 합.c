#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    
    int num; //숫자 개수
    char arr[100];
    int sum = 0;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf(" %c", &arr[i]);
        sum += arr[i]-'0';
    }
    printf("%d", sum);

    return 0;
} 