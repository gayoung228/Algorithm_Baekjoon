#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, find, cnt = 0;

    scanf("%d", &num);

    int *arr = (int *)malloc(sizeof(int) * num);
    if (arr == NULL) {
        // 메모리 할당 실패
        return 1;
    }

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &find);

    for (int i = 0; i < num; i++) {
        if (arr[i] == find) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    free(arr);  // 동적 메모리 해제

    return 0;
}
