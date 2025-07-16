#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int stu[31] = { 0 };
    int a;

    for (int i = 1; i <= 28; i++) {
        scanf("%d", &a);
        stu[a] = a;
    }

    for (int j = 1; j <= 30; j++) {
        if (stu[j] == NULL) {
            printf("%d\n", j);
        }
    }

    return 0;
}