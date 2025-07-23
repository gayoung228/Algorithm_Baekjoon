#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, i, idx, sum;
    int arr[10000];

    while (1)
    {
        idx = 0;
        sum = 0;
        scanf("%d", &n);

        if (n == -1)
            break;

        for (i = 1; i < n; ++i)
        {
            if (n % i == 0)
            {
                arr[idx] = i;
                sum += i;
                idx++;
            }
        }

        if (n == sum)
        {
            printf("%d = %d", n, arr[0]);

            for (i = 1; i < idx; i++)
            {
                printf(" + %d", arr[i]);
            }
            printf("\n");
        }
        else
        {
            printf("%d is NOT perfect.\n", n);
        }
    }

    return 0;
}
