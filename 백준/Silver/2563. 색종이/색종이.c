#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int paper[100][100] = { 0, };
	int n, x, y, count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		for (int j = y; j < y + 10; j++) {	//흔히 알고있는 x좌표는 2차원 배열에서 열에 해당 y좌표는 2차원 배열에서 행에 해당
			for (int k = x; k < x + 10; k++) {
				paper[j][k] = 1;	
			}
		}
	}
		for (int j = 0; j < 100; j++) {
			for (int k = 0; k < 100; k++) {
				if (paper[j][k] == 1) {
					count++; //어차피 1로 초기화된 것을 count하는것이기 때문에 중복은 없다.
				}
			}
		}
	printf("%d",count);
}