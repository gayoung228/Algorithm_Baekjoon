#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse(int arr[], int start, int end);

int main(void) {
    int n, m;
    int arr[101] = { 0, }; // 1~100까지 사용
    int a, b;

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        reverse(arr, a, b);
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}