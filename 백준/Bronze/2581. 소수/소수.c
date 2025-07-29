#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int N, M;
    int first = 0, min = 0, sum = 0;
    scanf("%d", &M);
    scanf("%d", &N);

    for (int i = M; i <= N; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0) //소수 X
                if (i == j)
                {
                    sum += i;
                    first++;
                    if (first == 1)
                        min = i;
                    break;
                }
                else
                    break;
        }
    }
    if (sum == 0)
        printf("-1");
    else
        printf("%d\n%d", sum, min);

    return 0;
}