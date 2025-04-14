#include <stdio.h>

int main() {
    
    int n, repeat=0;
    char a[5] = "long";

    scanf("%d", &n);

    repeat = n / 4;

    for (int i = 1; i <= repeat; i++)
    {
        printf("%s ", a);
    }
    printf("int\n");
    
    return 0;
}