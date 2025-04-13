#include <stdio.h>

int main()
{
    int h, m;

    scanf("%d %d", &h, &m);

    if (h == 0) {
        h = 23;
        m += 15;
    }
    else {
        h -= 1;
        m += 15;
    }

    if (m >= 60) {
        h += 1;
        m -= 60;
        if (h == 24) h = 0;
    }

    printf("%d %d\n", h, m);

    return 0;
}