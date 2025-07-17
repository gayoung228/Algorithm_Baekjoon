#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char arr[100];
    int isPalindrome = 1;

    scanf("%s", arr);

    int len = strlen(arr);

    for (int i = 0; i < len / 2; i++) {
        if (arr[i] != arr[len - i - 1]) {
            isPalindrome = 0;
        }
    }

    if (isPalindrome == 1) {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0; 
}