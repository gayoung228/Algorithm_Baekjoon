#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int square[100][100] = { 0, };
	int num, x, y, count = 0; //x는 열, y는 행
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d %d", &x, &y);
		for (int j = y; j < y + 10; j++) {	
			for (int k = x; k < x + 10; k++) {
				square[j][k] = 1;	
			}
		}
	}
		for (int j = 0; j < 100; j++) {
			for (int k = 0; k < 100; k++) {
				if (square[j][k] == 1) {
					count++; //어차피 1로 초기화된 것을 count하는것이기 때문에 중복은 없다.
				}
			}
		}
	printf("%d",count);
}
