#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n; //입력받을 개수
    int x, y; //좌표
    int maxx = -10000, minx = 10000, maxy = -10000, miny = 10000;
    int height = 0, bottom = 0; //높이, 밑변

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);

        if (x > maxx) {
            maxx = x;
        }
        if (x < minx) {
            minx = x;
        }
        bottom = maxx - minx;
        if (y > maxy) {
            maxy = y;
        }
        if (y < miny) {
            miny = y;
        }
        height = maxy - miny;
    }

    printf("%d", bottom*height);

    return 0;
}