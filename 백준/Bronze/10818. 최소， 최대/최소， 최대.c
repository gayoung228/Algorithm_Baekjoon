#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n];


    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("%d %d", min, max);

    return 0;
}