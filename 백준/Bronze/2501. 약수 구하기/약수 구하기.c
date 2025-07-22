#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, k;
    int arr[10000];
    int cnt = 0;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            arr[cnt++] = i;  
        }
    }

    if (cnt < k) {
        printf("0");
    } else {
        printf("%d", arr[k - 1]); 
    }

    return 0;
}