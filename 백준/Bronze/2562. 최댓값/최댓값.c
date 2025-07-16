#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n[9];
    int i, index;
    int max = n[0];

    for (i = 0; i < 9; i++) {
        scanf("%d", &n[i]);
        if (n[i] > max) {
            max = n[i];
            index = i;
        }
    }
    printf("%d\n%d", max, index+1);

    return 0;
}