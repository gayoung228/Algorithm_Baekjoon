#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int n, m; //n=바구니개수, m=m개의 줄
    int arr[101] = { 0, };
    int a, b, c; //a번 바구니부터 b번 바구니까지 c번 번호가 적혀져있는 공을 넣는다.

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &a, &b, &c);
        for (int k = a; k <= b; k++) {
            arr[k] = c;
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}