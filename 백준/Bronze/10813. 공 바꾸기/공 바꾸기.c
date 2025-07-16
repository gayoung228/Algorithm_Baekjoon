#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int swap();

int main(void) {

    int n, m; //n=바구니개수, m=m개의 줄
    int arr[101] = { 0, };
    int a, b; // a번 바구니와 b번 바구니에 들어있는 공을 교환
    int temp=0;

    scanf("%d %d", &n, &m);

    // 바구니에 공 번호 초기화 (1번 바구니에 1번 공, ...)
    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}