#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    int x4, y4;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    //세 점 중 두 점은 x좌표가 같고 나머지 하나는 다름 -> 그 다른 x값이 네 번째 점의 x좌표
    //y도 마찬가지이다.
    if (x1 == x2) x4 = x3;
    else if (x1 == x3) x4 = x2;
    else x4 = x1;

    if (y1 == y2) y4 = y3;
    else if (y1 == y3) y4 = y2;
    else y4 = y1;

    printf("%d %d\n", x4, y4);

    return 0;
}