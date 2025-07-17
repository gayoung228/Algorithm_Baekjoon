#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    int c[1000];

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &c[i]);
    }

    for (int i = 0; i < t; i++) {
        int quater = 0;
        int dime = 0;
        int nickel = 0;
        int penny = 0;
        
        if (c[i] / 25 != 0) {
            quater = c[i] / 25;
            c[i] = c[i] % 25;
        }
        if (c[i] / 10 != 0) {
            dime = c[i] / 10;
            c[i] = c[i] % 10;
        }
        if (c[i] / 5 != 0) {
            nickel = c[i] / 5;
            c[i] = c[i] % 5;
        }
        if (c[i] / 1 != 0) {
            penny = c[i] / 1;
            c[i] = c[i] % 1;
        }
        if (c[i] == 0) {
            printf("%d %d %d %d\n", quater, dime, nickel, penny);
        }
    }

    return 0;
}