#include <stdio.h>

int main() {
    
    int sum=0, n, price, num;
    int a = 0, x = 0; 

    scanf("%d", &sum);
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &price, &num);
        a = price * num;
        x += a;
    }

    if (sum == x)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}