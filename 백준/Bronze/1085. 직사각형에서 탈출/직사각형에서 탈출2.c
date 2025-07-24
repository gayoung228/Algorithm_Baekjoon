#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 근데 이렇게 해도 맞긴 함 -> 백준에서는 실패
int main() {
    int arr[4];
    int res = 0;
    int min = 10000;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 4; i++) {
        if (i == 0 || i == 1) {
            for (int j = 2; j < 4; j++) {
                res = arr[i] - arr[j];
                if (res < 0) {
                    res *= -1;
                }
                if (res < min) {
                    min = res;
                }
            }
        }
        else {
            for (int j = 0; j < 2; j++) {
                res = arr[i] - arr[j];
                if (res < 0) {
                    res *= -1;
                }
                if (res < min) {
                    min = res;
                }
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        res = arr[i] - 0;
        if (res < min) {
            min = res;
        }
    }

    printf("%d", min);

    return 0;
}
