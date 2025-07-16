#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int reverse(int n)
{
    int result;
    result = n / 100 + ((n / 10) % 10) * 10 + (n % 10) * 100;
    return result;
}

int main()
{

    int n1, n2;

    scanf("%d %d", &n1, &n2);

    n1 = reverse(n1);
    n2 = reverse(n2);

    if (n1 < n2)
        printf("%d", n2);
    else
        printf("%d", n1);
    return 0;
}